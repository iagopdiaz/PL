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
%token <string> VDINAMICA MAYOR MENOR IGUAL DISTINTO MAYORIGUAL MENORIGUAL AND OR

%token <string> NUMERO
%token <string> PALABRA
%type <string> funcion dimensionvar contvar numarrayvar crearvar comparador contif
%start S
%%

S : funcion {} 
	;
		
funcion : VARIABLE dimensionvar {printf("\n");}
	     | IF contif
	;


contif : PALABRA comparador PALABRA funcion {printf("\tif(%s%s%s){\n\t};",$1,$2,$3);}
		| PALABRA comparador PALABRA ELSE {printf("\tif(%s%s%s){\n\t%s} else {\n\t};",$1,$2,$3,$4);}
		| PALABRA comparador PALABRA ELSE IF  
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

dimensionvar: contvar{}
	       |VARRAY contvar numarrayvar{
					printf("%s",$3);
	       			}
;

contvar : VDINAMICA crearvar PALABRA{
				char aux[100];
				strcpy(aux, $2);
				strcat(aux, "* ");
				strcat(aux, $3);
				printf("%s ",aux);
				}
  	  |crearvar PALABRA{
  	  			char aux[100];
				strcpy(aux, $1);
				strcat(aux, $2);
				printf("%s ",aux);
				}
	  |VESTATICA crearvar PALABRA{
  	  			char aux[100];
				strcpy(aux, $1);
				strcat(aux, $2);
				printf("%s ",aux);
				}
	;
	
crearvar:  VNUMERO {$$ = "int ";}
	  	 | VSTRING {$$ = "char ";}
	  ;
	  
numarrayvar: numarrayvar NUMERO {
				char aux[100];
				strcpy(aux, $1);
				strcat(aux, "[");
				strcat(aux, $2);
				strcat(aux, "]");
				$$ = aux;
				}
				
	     |NUMERO {
	     			char aux[100] = "[";
				strcat(aux, $1);
				strcat(aux, "]");
				$$ = aux;
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


