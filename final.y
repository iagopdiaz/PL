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

%token <string> FOR WHILE DOWHILE ENDFOR ENDWHILE ENDDOWHILE 
%token <string> VARIABLE
%token <string> VNUMERO
%token <string> VSTRING
%token <string> VARRAY SUMA RESTA MULT DIV EXPONT RAIZ IGUALM EN DE
%token <string> VESTATICA ELSE IF
%token <string> VDINAMICA MAYOR MENOR IGUAL DISTINTO MAYORIGUAL MENORIGUAL AND OR CLOSEIF ELSEIF

%token <string> NUMERO
%token <string> PALABRA
%type <string> funcion dimensionvar contvar numarrayvar crearvar comparador comprecursivo contif recursivo contenido contmat operador contfor contwhile contdowhile
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

		
funcion :     VARIABLE dimensionvar {$$ = $2;}
     		| IF contif {$$ = $2;}
		| contmat {$$ = $1;}
		| FOR contfor {$$ = $2;}
		| WHILE contwhile {$$ = $2;}
		| DOWHILE contdowhile {$$ = $2;}
	;

//Funciones Contenido de alguna otra funcion recursiva(if, for,while), indicar cuando parar con algo STOP
contenido :  VARIABLE dimensionvar {$$ = $2;}
     	     | IF contif {$$ = $2;}
     	     | contmat {$$ = $1;}
     	     | FOR contfor {$$ = $2;}
	     | WHILE contwhile {$$ = $2;}
	     | DOWHILE contdowhile {$$ = $2;}
	     
     	     | contenido VARIABLE dimensionvar {
     	     	 			char * auxcont;
					auxcont= (char*)malloc ( 200*sizeof(char) );
					strcpy(auxcont, $1);
					strcat(auxcont, "\t");
					strcat(auxcont, $3);
					$$ = auxcont;}
     	     | contenido IF contif {
     	     				char * auxcont;
					auxcont = (char*)malloc ( 200*sizeof(char) );
					strcpy(auxcont, $1);
					strcat(auxcont, "\t");
					strcat(auxcont, $3);
					
					$$ = auxcont;}
	     | contenido contmat {
     	     				char * auxcont;
					auxcont = (char*)malloc ( 200*sizeof(char) );
					strcpy(auxcont, $1);
					strcat(auxcont, "\t");
					strcat(auxcont, $2);
					$$ = auxcont;}
	     | contenido FOR contfor {
     	     				char * auxcont;
					auxcont = (char*)malloc ( 200*sizeof(char) );
					strcpy(auxcont, $1);
					strcat(auxcont, "\t");
					strcat(auxcont, $3);
					$$ = auxcont;}
	     | contenido WHILE contwhile {
     	     				char * auxcont;
					auxcont = (char*)malloc ( 200*sizeof(char) );
					strcpy(auxcont, $1);
					strcat(auxcont, "\t");
					strcat(auxcont, $3);
					$$ = auxcont;}
	     | contenido DOWHILE contdowhile {
     	     				char * auxcont;
					auxcont = (char*)malloc ( 200*sizeof(char) );
					strcpy(auxcont, $1);
					strcat(auxcont, "\t");
					strcat(auxcont, $3);
					$$ = auxcont;}
	;
	
	
////////////////////////////////////Parte Condiciones///////////////////////////
	
contif : comprecursivo contenido CLOSEIF {
					char * aux;
					aux = (char*)malloc ( 500*sizeof(char) );
					strcpy(aux, "\tif");
					strcat(aux, "(");
					strcat(aux, $1);
					strcat(aux, ")");
					strcat(aux, "{\n\t");
					strcat(aux, $2);
					strcat(aux, "\t};\n");
					$$ = aux;
					}/*
		| PALABRA comparador PALABRA contenido ELSE contenido CLOSEIF {
					char * aux;
					aux = (char*)malloc ( 500*sizeof(char) );
					strcpy(aux, "\tif");
					strcat(aux, "(");
					strcat(aux, $1);
					strcat(aux, $2);
					strcat(aux, $3);
					strcat(aux, ")");
					strcat(aux, "{\n");
					strcat(aux, $4);
					strcat(aux, "\n\t} else {\n\t\t");
					strcat(aux, $6);
					strcat(aux, "\t};\n");
					$$ = aux;
					}
	| PALABRA comparador PALABRA contenido ELSEIF PALABRA comparador PALABRA contenido CLOSEIF {
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
					strcat(aux, "\n\t} else if(");
					strcat(aux, $6);
					strcat(aux, $7);
					strcat(aux, $8);
					strcat(aux, ") {\n\t\t");
					strcat(aux, $9);
					strcat(aux, "\t};\n");
					$$ = aux;
					};*/
	
	;


comprecursivo: comprecursivo AND comprecursivo{
					char * auxcont;
					auxcont= (char*)malloc ( 200*sizeof(char) );
					strcpy(auxcont, $1);
					strcat(auxcont, " && ");
					strcat(auxcont, $3);
					$$ = auxcont;}
	       |comprecursivo OR comprecursivo{
					char * auxcont;
					auxcont= (char*)malloc ( 200*sizeof(char) );
					strcpy(auxcont, $1);
					strcat(auxcont, " || ");
					strcat(auxcont, $3);
					$$ = auxcont;}
	       |PALABRA comparador PALABRA {
	       			char * aux;
					aux = (char*)malloc ( 100*sizeof(char) );
					strcpy(aux, $1);
					strcat(aux, $2);
					strcat(aux, $3);
					$$ = aux;
					}
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

////////////////////////////////Parte Variables/////////////////////////////////

dimensionvar: contvar {		char * auxdim;
					auxdim = (char*)malloc ( 100*sizeof(char) );
					strcpy(auxdim, "\t");
					strcat(auxdim, $1);
					strcat(auxdim, ";\n");
					$$ = auxdim;
					}
	       |VARRAY contvar numarrayvar{
					char * auxdim;
					auxdim = (char*)malloc ( 200*sizeof(char) );
					strcpy(auxdim, "\t");
					strcat(auxdim, $2);
					strcat(auxdim, " ");
					strcat(auxdim, $3);
					strcat(auxdim, ";\n");
					$$ = auxdim;
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

///////////////////////////////////////Parte Matematicas//////////////////777
//a mas b en aux   //se guarda en aux -> aux = a + b
//a mas b // se guarda en a  -> a += b
contmat : PALABRA operador PALABRA {
					char * aux;
					aux = (char*)malloc ( 100*sizeof(char) );
					strcpy(aux, "\t");
					if(strcmp($2, "pow")==0 || strcmp($2, "sqrt")==0){	
						strcat(aux, $2);
						strcat(aux, "(");
						strcat(aux, $1);
						strcat(aux, ",");
						strcat(aux, $3);
						strcat(aux, ");\n");
					} else {
						strcat(aux, $1);
						strcat(aux, $2);
						strcat(aux, $3);
						strcat(aux, ";\n");
					}
					$$ = aux;
				};
		
		| operador PALABRA DE PALABRA {
					char * aux;
					aux = (char*)malloc ( 100*sizeof(char) );
					strcpy(aux, "\t");
					/*strcat(aux, $1);
					strcat(aux, " = ");*/
					strcat(aux, $1);
					strcat(aux, "(");
					strcat(aux, $2);
					strcat(aux, ",");
					strcat(aux, $4);
					strcat(aux, ");\n");
					$$ = aux;
				};
		| operador PALABRA DE PALABRA EN PALABRA {
					char * aux;
					aux = (char*)malloc ( 100*sizeof(char) );
					strcpy(aux, "\t");
					strcat(aux, $6);
					strcat(aux, " = ");
					strcat(aux, $1);
					strcat(aux, "(");
					strcat(aux, $2);
					strcat(aux, ",");
					strcat(aux, $4);
					strcat(aux, ");\n");
					$$ = aux;
				};
		| operador DE PALABRA {
					char * aux;
					aux = (char*)malloc ( 100*sizeof(char) );
					strcpy(aux, "\t");
					strcat(aux, $1);
					strcat(aux, "(");
					strcat(aux, $3);
					strcat(aux, ");\n");
					$$ = aux;
				};
		| operador DE PALABRA EN PALABRA {
					char * aux;
					aux = (char*)malloc ( 100*sizeof(char) );
					strcpy(aux, "\t");
					strcat(aux, $5);
					strcat(aux, " = ");
					strcat(aux, $1);
					strcat(aux, "(");
					strcat(aux, $3);
					strcat(aux, ");\n");
					$$ = aux;
				};

operador:	 SUMA {$$="+";}
		   | RESTA {$$="-";}
		   | MULT {$$="*";}
		   | DIV {$$="/";}
		   | IGUALM {$$="=";}
		   | EXPONT {$$="pow";}
		   | RAIZ {$$="sqrt";}
	;


////////////////////////////////Parte Bucles//////////////////////////////////
 contfor: NUMERO contenido ENDFOR {	
 					char * aux;
					aux = (char*)malloc ( 500*sizeof(char) );
					strcpy(aux, "\tfor(int i = 0;i < ");
					strcat(aux, $1);
					strcat(aux, ";i++){\n\t ");
					strcat(aux, $2);
					strcat(aux, "\t};\n");
					$$ = aux;
					}
 	  |NUMERO NUMERO contenido ENDFOR {
 	  				char * aux;
					aux = (char*)malloc ( 500*sizeof(char) );
					strcpy(aux, "\tfor(int i = ");
					strcat(aux, $1);
					strcat(aux, ";i < ");
					strcat(aux, $2);
					strcat(aux, ";i++){\n\t ");
					strcat(aux, $3);
					strcat(aux, "\t};\n");
					$$ = aux;
					}
 	  
 	  ;
 
 
 contwhile: PALABRA comparador PALABRA contenido ENDWHILE {
					char * aux;
					aux = (char*)malloc ( 500*sizeof(char) );
					strcpy(aux, "\twhile(");
					strcat(aux, $1);
					strcat(aux, $2);
					strcat(aux, $3);
					strcat(aux, ")");
					strcat(aux, "{\n\t");
					strcat(aux, $4);
					strcat(aux, "\t};\n");
					$$ = aux;
					};
 
 
 contdowhile: PALABRA comparador PALABRA contenido ENDDOWHILE {
					char * aux;
					aux = (char*)malloc ( 500*sizeof(char) );
					strcpy(aux, "\tdo{\n\t");
					strcat(aux, $4);
					strcat(aux, "\t}");
					strcat(aux, "while(");
					strcat(aux, $1);
					strcat(aux, $2);
					strcat(aux, $3);
					strcat(aux, ")\n");
					$$ = aux;
					};;
 
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


