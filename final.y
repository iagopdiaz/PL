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
%token <string> PALABRA
%token <string> VDINAMICA
%type <string> funcion contvar crearvar
%start S
%%

S : funcion {} 
	;
		
funcion : VARIABLE contvar {printf("%s \n",$2);}
	  //|IF contif
	;

contvar : VDINAMICA crearvar {$$ = $2}
  	  |crearvar {$$ = $1}
	;
	
crearavar: VNUMERO PALABRA {char  aux[20] ="";
				strcat(aux,"int ");
				strcat(aux,$2);
				$$ = aux;}
	  |VSTRING PALABRA 
	  ;
	   
%%
int main(int argc, char *argv[]) {
extern FILE *yyin;

	switch (argc) {
		case 1: yyin=stdin;
			yyparse();
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


