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

%token <string> CABECERA
%token <string> ABRIRTAG
%token <string> CERRARTAG
%token <string> TEXTO
%type <string> tag contenido
%start S
%%

S : CABECERA tag {printf("Sintaxis XML Correcta.\n");} 
	;
		
tag : ABRIRTAG contenido CERRARTAG {if(strcmp($1+1,$3+2) != 0){
			sprintf(error, "Encontrado: </%s . Se esperaba: </%s ", $3+2, $1+1); 
			yyerror(error);
			YYABORT;
		}
	}
	;

contenido : contenido tag
	   | tag
	   | TEXTO
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
  fprintf (stderr,"Sintaxis XML incorrecta. Error en línea %d: %s\n", yylineno, message);
    return;
}


