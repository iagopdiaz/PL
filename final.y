%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void yyerror (char const *);
extern int yylex();
extern int yylineno;
char error[500];
%}
%union{
	char * string;
}

%token <string> VARIABLE
%token <string> VNUMERO
%token <string> VSTRING
%token <string> VARRAY
%token <string> VESTATICA ELSE IF
%token <string> VDINAMICA MAYOR MENOR IGUAL DISTINTO MAYORIGUAL MENORIGUAL AND OR CLOSEIF

%token <string> NUMERO
%token <string> PALABRA
%type <string> funcion dimensionvar contvar numarrayvar crearvar comparador contif recursivo contenido
%start S
%%

S : recursivo {printf("%s",$1);} 
	;

recursivo : recursivo funcion {char * aux;
				aux = (char*)malloc ( 100*sizeof(char) );
				strcpy(aux, $1);
				strcat(aux, $2);
				$$ = aux;
				}
	     |funcion  {	
	     
				$$ = $1;
				}
	;

		
funcion :  VARIABLE dimensionvar {$$ = $2;}
     	     |  IF contif {$$ = $2;}
	;

//Funciones Contenido de alguna otra funcion recursiva(if, for,while), indicar cuando parar con algo STOP
contenido :  VARIABLE dimensionvar {	char * auxcont;
					auxcont= (char*)malloc ( 200*sizeof(char) );
					strcpy(auxcont, $2);
					$$ = auxcont;
					}
	
     	     |  IF contif {$$ = $2;}
     	     |contenido VARIABLE dimensionvar {
     	     				char * auxcont;
					auxcont= (char*)malloc ( 200*sizeof(char) );
					strcpy(auxcont, $1);
					strcat(auxcont, "\n\t\t");
					strcat(auxcont, $3);
					$$ = auxcont;}
     	     | contenido IF contif {
     	     				char * auxcont;
					auxcont = (char*)malloc ( 200*sizeof(char) );
					strcpy(auxcont, $1);
					strcat(auxcont, "\t\n");
					strcat(auxcont, $3);
					$$ = auxcont;}
	;
	
contif : PALABRA comparador PALABRA contenido CLOSEIF {
					char * aux;
					aux = (char*)malloc ( 500*sizeof(char) );
					strcpy(aux, "\tif");
					strcat(aux, "(");
					strcat(aux, $1);
					strcat(aux, $2);
					strcat(aux, $3);
					strcat(aux, ")");
					strcat(aux, "{\n\t\t");
					strcat(aux, $4);
					strcat(aux, "\n\t};");
					$$ = aux;
					}
		| PALABRA comparador PALABRA contenido ELSE contenido CLOSEIF {
					char * aux;
					aux = (char*)malloc ( 500*sizeof(char) );
					strcpy(aux, "\tif");
					strcat(aux, "(");
					strcat(aux, $1);
					strcat(aux, $2);
					strcat(aux, $3);
					strcat(aux, ")");
					strcat(aux, "{\n\t\t");
					strcat(aux, $4);
					strcat(aux, "\n\t} else {\n\t\t");
					strcat(aux, $6);
					strcat(aux, "\n\t};");
					$$ = aux;


			}
		| PALABRA comparador PALABRA ELSE IF contif
	;


comparador:  MAYOR {$$=">";}
		   | MENOR {$$="<";}
		   | IGUAL {$$="==";}
		   | DISTINTO {$$="!=";}
		   | AND {$$="&&";}
		   | OR {$$="||";}
		   | MAYORIGUAL {$$=">=";}
		   | MENORIGUAL {$$="<=";}
	;

dimensionvar: contvar {		char * aux;
					aux = (char*)malloc ( 100*sizeof(char) );
					strcpy(aux, $1);
					strcat(aux, ";");
					$$ = aux;}
	       |VARRAY contvar numarrayvar{
					char * aux;
					aux = (char*)malloc ( 200*sizeof(char) );
					strcpy(aux, $2);
					strcat(aux, " ");
					strcat(aux, $3);
					strcat(aux, ";");
					$$ = aux;
	       			}
;

contvar : VDINAMICA crearvar PALABRA{
				char * auxvar;
				auxvar = (char*)malloc ( 100*sizeof(char) );
				strcpy(auxvar, $2);
				strcat(auxvar, "* ");
				strcat(auxvar, $3);
				$$ = auxvar;
				}
  	  |crearvar PALABRA{
  	  			char * auxvar;
				auxvar = (char*)malloc ( 100*sizeof(char) );
				strcpy(auxvar, $1);
				strcat(auxvar, $2);
				$$ = auxvar;
				}
	  |VESTATICA crearvar PALABRA{
  	  			char * auxvar;
				auxvar = (char*)malloc ( 100*sizeof(char) );
				strcpy(auxvar, $1);
				strcat(auxvar, $2);
				$$ = auxvar;
				}
	;
	
crearvar:  VNUMERO {$$ = "int ";}
	  	 | VSTRING {$$ = "char ";}
	  ;
	  
numarrayvar: numarrayvar NUMERO {
				char * auxnum;
				auxnum = (char*)malloc ( 100*sizeof(char) );
				auxnum[0] = '[';
				strcpy(auxnum, $1);
				strcat(auxnum, "[");
				strcat(auxnum, $2);
				strcat(auxnum, "]");
				$$ = auxnum;
				}
				
	     |NUMERO {
	     			char * auxnum;
				auxnum = (char*)malloc ( 100*sizeof(char) );
				auxnum[0] = '[';
				strcat(auxnum, $1);
				strcat(auxnum, "]");
				$$ = auxnum;
				}
	  ;	
	   
%%
int main(int argc, char *argv[]) {
extern FILE *yyin;

	switch (argc) {
		case 1: yyin=stdin;
			printf("#include <stdio.h>\n#include <math.h>\n\nint main() {\n\n");
			yyparse();
			printf("\n}\n");
			break;
		case 2: yyin = fopen(argv[1], "r");
			if (yyin == NULL) {
				printf("ERROR: No se ha podido abrir el fichero.\n");
			}
			else {
				yyparse();
				fclose(yyin);
			}
			break;
		default: printf("ERROR: Demasiados argumentos.\nSintaxis: %s [fichero_entrada]\n\n", argv[0]);
	}

	return 0;
}
void yyerror (char const *message) {
  fprintf (stderr,"Sintaxis Pseudocodigo incorrecta. Error en línea %d: %s\n", yylineno, message);
    return;
}


