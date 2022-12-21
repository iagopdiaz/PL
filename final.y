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
%token <string> VNUMERO VBOOL VSTRING VTRUE VFALSE
%token <string> STOP
%token <string> VARRAY SUMA RESTA MULT DIV EXPONT RAIZ IGUALM DE EN
%token <string> VESTATICA ELSE IF
%token <string> VDINAMICA MAYOR MENOR IGUAL DISTINTO MAYORIGUAL MENORIGUAL AND OR CLOSEIF ELSEIF

%token <string> NUMERO
%token <string> PALABRA
%type <string>  dimensionvar contvar numarrayvar crearvar comparador parametro comprecursivo contif  contenido contmat recConmat operador contfor contwhile contdowhile typevar
%start S
%%

S : contenido {printf("%s",$1);} 
	;


//Funciones Contenido de alguna otra funcion recursiva(if, for,while), indicar cuando parar con algo STOP
contenido :    VARIABLE dimensionvar {$$ = $2;}
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
	
	
////////////////////////////////////Parte Condiciones//////////////////////////



contif : comprecursivo  contenido CLOSEIF {
					char * aux;
					aux = (char*)malloc ( 500*sizeof(char) );
					strcpy(aux, "\tif");
					strcat(aux, "(");
					strcat(aux, $1);
					strcat(aux, ")");
					strcat(aux, "{\n\t");
			;
					$$ = aux;
					}
		| comprecursivo contenido ELSE  contenido CLOSEIF  {
					char * aux;
					aux = (char*)malloc ( 500*sizeof(char) );
					strcpy(aux, "\tif");
					strcat(aux, "(");
					strcat(aux, $1);
					strcat(aux, ")");
					strcat(aux, "{\n");
					strcat(aux, $2);
					strcat(aux, "\n\t} else {\n\t\t");
					strcat(aux, $4);
					strcat(aux, "\t};\n");
					$$ = aux;
					}
	| comprecursivo contenido ELSEIF comprecursivo  contenido CLOSEIF {
					char * aux;
					aux = (char*)malloc ( 500*sizeof(char) );
					strcpy(aux, "\tif");
					strcat(aux, "(");
					strcat(aux, $1);
					strcat(aux, ")");
					strcat(aux, "{\n\t\t");
					strcat(aux, $2);
					strcat(aux, "\n\t} else if(");
					strcat(aux, $4);
					strcat(aux, ") {\n\t\t");
					strcat(aux, $5);
					strcat(aux, "\t};\n");
					$$ = aux;
					};
	
	;


comprecursivo: comprecursivo comparador PALABRA{
				char * auxcont;
				auxcont= (char*)malloc( 100*sizeof(char) );
				if ((strcmp($2,"||") == 0) ||(strcmp($2,"&&") == 0)){
					strcpy(auxcont, $1);
					strcat(auxcont, " ");
					strcat(auxcont, $2);
					strcat(auxcont, " ");
					strcat(auxcont, $3);	
				}else{
					strcpy(auxcont, $1);
					strcat(auxcont, $2);
					strcat(auxcont, $3);				
				}
				$$ = auxcont;
				}
	        | PALABRA {
	       		char * aux;
				aux = (char*)malloc ( 20*sizeof(char) );
				strcpy(aux, $1);
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
  	  | crearvar PALABRA{
  	  			char * auxvar;
				auxvar = (char*)malloc ( 100*sizeof(char) );
				strcpy(auxvar, $1);
				strcat(auxvar, $2);
				$$ = auxvar;
				}
	  | VESTATICA crearvar PALABRA{
  	  			char * auxvar;
				auxvar = (char*)malloc ( 100*sizeof(char) );
				strcpy(auxvar, $1);
				strcat(auxvar, $2);
				$$ = auxvar;
				}
				
	   ////////////////PARA INICIALIZAR CON X VALOR///////////////////////
	  | VDINAMICA crearvar PALABRA IGUALM typevar{
  	  			char * auxvar;
				auxvar = (char*)malloc ( 100*sizeof(char) );
				char * auxvar2;
				auxvar2 = (char*)malloc ( 100*sizeof(char) );
				char * control;
				char * partes;
				
				strcpy(auxvar, $2); //Variable salida
				strcpy(auxvar2, $5);  //Variable con control de tipo
				partes = strtok($5, "-"); //Variable con el valor del tipo
				control = memchr(auxvar2, '-', strlen(auxvar2));
				control = strtok(control, "-");
				
				if (strcmp(control,auxvar) == 0){
					strcat(auxvar, $3);
					strcat(auxvar, "=");
					strcat(auxvar, $5);
					$$ = auxvar;
				}else{
					sprintf(error, "Encontrado tipo: %s . Se esperaba tipo: %s", control, auxvar); 
					yyerror(error);
					YYABORT;
				}
				}
  	  | crearvar PALABRA IGUALM typevar{
  	  			char * auxvar;
				auxvar = (char*)malloc ( 100*sizeof(char) );
				char * auxvar2;
				auxvar2 = (char*)malloc ( 100*sizeof(char) );
				char * control;
				char * partes;
				
				strcpy(auxvar, $1); //Variable salida
				strcpy(auxvar2, $4);  //Variable con control de tipo
				partes = strtok($4, "-"); //Variable con el valor del tipo
				control = memchr(auxvar2, '-', strlen(auxvar2));
				control = strtok(control, "-");
				
				if (strcmp(control,auxvar) == 0){
					strcat(auxvar, $2);
					strcat(auxvar, "=");
					strcat(auxvar, $4);
					$$ = auxvar;
				}else{
					sprintf(error, "Encontrado tipo: %s . Se esperaba tipo: %s", control, auxvar); 
					yyerror(error);
					YYABORT;
				}
				
				
			}
	  | VESTATICA crearvar PALABRA IGUALM typevar{
  	  			char * auxvar;
				auxvar = (char*)malloc ( 100*sizeof(char) );
				char * auxvar2;
				auxvar2 = (char*)malloc ( 100*sizeof(char) );
				char * control;
				char * partes;
				
				strcpy(auxvar, $2); //Variable salida
				strcpy(auxvar2, $5);  //Variable con control de tipo
				partes = strtok($5, "-"); //Variable con el valor del tipo
				control = memchr(auxvar2, '-', strlen(auxvar2));
				control = strtok(control, "-");
				
				if (strcmp(control,auxvar) == 0){
					strcat(auxvar, $3);
					strcat(auxvar, "=");
					strcat(auxvar, $5);
					$$ = auxvar;
				}else{
					sprintf(error, "Encontrado tipo: %s . Se esperaba tipo: %s", control, auxvar); 
					yyerror(error);
					YYABORT;
				}
				}
				
	/////////////////////////////ERRORES FALTA DE PARAMETROS///////////////////
	
	///////////////////////////////SIN NOMBRE VARIABLE///////////////////////////
	  | VDINAMICA crearvar {
	 				sprintf(error, "Error, Falta nombre de la variable"); 
					yyerror(error);
					YYABORT;
				}
  	  | crearvar {
	 				sprintf(error, "Error, Falta nombre de la variable"); 
					yyerror(error);
					YYABORT;
				}
	  | VESTATICA crearvar {
	 				sprintf(error, "Error, Falta nombre de la variable"); 
					yyerror(error);
					YYABORT;
				}
				
	///////////////////////////////SIN TIPO VARIABLE///////////////////////////
	  | VDINAMICA PALABRA{
	 				sprintf(error, "Error, Falta el tipo de la variable"); 
					yyerror(error);
					YYABORT;
				}
  	  | PALABRA {
	 				sprintf(error, "Error, Falta el tipo de la variable"); 
					yyerror(error);
					YYABORT;
				}
	  | VESTATICA PALABRA{
	 				sprintf(error, "Error, Falta el tipo de la variable"); 
					yyerror(error);
					YYABORT;
				}
	;
	
crearvar:  VNUMERO {$$ = "int ";}
	   | VSTRING {$$ = "char ";}
	   | VBOOL {$$ = "bool  ";}
	  ;
	  
typevar: VTRUE {$$ = "true-bool ";}
	 | VFALSE {$$ = "false-bool ";}
	 | NUMERO {		char * auxtype;
				auxtype = (char*)malloc ( 50*sizeof(char) );
				strcpy(auxtype, $1);
				strcat(auxtype, "-int ");
				$$ = auxtype;
				}
	 | PALABRA {		char * auxtype;
				auxtype = (char*)malloc ( 50*sizeof(char) );
				strcpy(auxtype, $1);
				strcat(auxtype, "-char ");
				$$ = auxtype;
				}				

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

///////////////////////////////////////Parte Matematicas/////////////////


contmat : operador parametro operador recConmat {
					char * aux;
					aux = (char*)malloc ( 100*sizeof(char) );
					strcpy(aux, "\t");
					if(strcmp($1, "pow")==0 || strcmp($1, "sqrt")==0){	
						strcpy(aux, $1);
						strcat(aux, "(");
						strcat(aux, $2);
						strcat(aux, ",");
						strcat(aux, $4);
						strcat(aux, ");\n");
					} else {
						strcat(aux, $2);
						strcat(aux, " ");
						strcat(aux, $3);
						strcat(aux, " ");
						strcat(aux, $4);
					
						strcat(aux, ";\n");
					}
					$$ = aux;
				}
		| contmat EN PALABRA STOP {
					char * aux;
					aux = (char*)malloc ( 100*sizeof(char) );
					strcpy(aux, "\t");
					strcpy(aux, $3);
					strcat(aux, " = ");
					strcat(aux, $1);
					$$ = aux;
				};
		/*raiz 2 de 20*/
		| operador parametro DE parametro STOP {
					char * aux;
					aux = (char*)malloc ( 100*sizeof(char) );
					strcpy(aux, $1);
					strcat(aux, "(");
					strcat(aux, $2);
					strcat(aux, ",");
					strcat(aux, $4);
					strcat(aux, ");\n");
					$$ = aux;
				};
		| operador parametro DE parametro {
				sprintf(error, "Error, Falta cerrar la operación con un '.'\n");
                yyerror(error);
                YYABORT;
		}
		| operador parametro DE parametro EN PALABRA STOP {
					char * aux;
					aux = (char*)malloc ( 100*sizeof(char) );
					strcpy(aux, $6);
					strcat(aux, " = ");
					strcat(aux, $1);
					strcat(aux, "(");
					strcat(aux, $2);
					strcat(aux, ",");
					strcat(aux, $4);
					strcat(aux, ");\n");
					$$ = aux;
				};
		| operador parametro DE parametro EN PALABRA {
				sprintf(error, "Error, Falta cerrar la operación con un '.'\n");
                yyerror(error);
                YYABORT;
		}
		|  operador DE parametro STOP {
				char * aux;
				aux = (char*)malloc ( 100*sizeof(char) );
				strcpy(aux, $1);
				strcat(aux, "(");
				strcat(aux, $3);
				strcat(aux, ");\n");
				$$ = aux;
			};
		|  operador DE parametro {
				sprintf(error, "Error, Falta cerrar la operación con un '.'\n");
                yyerror(error);
                YYABORT;
		}
		|  operador DE parametro EN PALABRA STOP {
				char * aux;
				aux = (char*)malloc ( 100*sizeof(char) );
				strcpy(aux, $5);
				strcat(aux, " = ");
				strcat(aux, $1);
				strcat(aux, "(");
				strcat(aux, $3);
				strcat(aux, ");\n");
				$$ = aux;
			};
		|  operador DE parametro EN PALABRA {
				sprintf(error, "Error, Falta cerrar la operación con un '.'\n");
                yyerror(error);
                YYABORT;
		}
	

	



operador:	 SUMA {$$="+";}
		   | RESTA {$$="-";}
		   | MULT {$$="*";}
		   | DIV {$$="/";}
		   | EXPONT {$$="pow";}
		   | RAIZ {$$="sqrt";}
	;

recConmat:    parametro operador recConmat {
				char * aux;
				aux = (char*)malloc ( 500*sizeof(char) );
				strcpy(aux, $1);
				strcat(aux, $2);
				strcat(aux, $3);
				$$ = aux;
			};
			| parametro STOP {
				char * aux;
				aux = (char*)malloc ( 500*sizeof(char) );
				strcpy(aux, $1);
				$$ = aux;
			}
			| parametro  {
				char * aux;
				aux = (char*)malloc ( 500*sizeof(char) );
				strcpy(aux, $1);
				$$ = aux;
			}
	
			| contmat { $$ = $1;}

		   ;

parametro :   PALABRA {$$=$1;}
		    | NUMERO {$$=$1;}
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


