%{
#include <stdlib.h>
#include "final.tab.h"
%}
%option yylineno
espacios [ \n\t]+



numero [0-9]+

/*Hacer una variable | "variable numero a"
Por defecto estaticas salvo que se indique "variable" "dinamica"
tipo var y memoria var son no terminales por lo que no haria falta pasarlos a bison*/
var {variable}{tipo_var}{memoria_var}
variable "variable"|"VARIABLE"
tipo_var {v_numero}{v_letras}{v_matriz}
memoria_var {v_estatica}{v_dinamica}
v_numero "numero"|"NUMERO"
v_letras "letras"|"LETRAS"
v_matriz "matriz"|"MATRIZ"
v_estatica "estatica"|"ESTATICA"
v_dinamica "dinamica"|"DINAMICA"

/*Hacer un bucle | "bucle 5 10" va de 5 a 10 | "bucle 10" va de 0 a 10*/
bucle "bucle"
endfor "finfor"
do_while "hacer mientras"
enddowhile "findowhile"
while "mientras"
endwhile "finwhile"

/*Hacer comparaciones | "si a mayor que b"*/
if {si}{else}{comparador}
closeIf "finif"
else "si no"
else_if "si no si"
si "si"
comparador {c_mayorigual}{c_menorigual}{c_mayor}{c_menor}{c_igual}{c_distinto}{c_and}{c_or}
c_mayorigual "mayor o igual"
c_menorigual "menor o igual"
c_mayor "mayor"
c_menor "menor"
c_igual "igual que"
c_distinto "distinto"
c_and "y"
c_or "o"

/*Funciones matemáticas*/
stop "."
m_de "de"
m_suma "mas"
m_resta "menos"
m_multiplicacion "multiplicado por"|"por"
m_division "dividido entre"|"entre"
m_exponente "elevado a"
m_raiz "raiz cuadrada"|"raiz"
m_igual "igual"
/*raiz 3 de 27*/

/*Funciones automaticas*/
funcion "funcion"


/*Palabras para variables*/
palabra [A-Za-z_]+

%%
{espacios} {}
{stop} {return STOP;}
{numero} {yylval.string = strdup(yytext); return NUMERO;}

{variable} {return VARIABLE;}
{v_numero} {yylval.string = strdup(yytext); return VNUMERO;}
{v_letras} {yylval.string = strdup(yytext); return VSTRING;}
{v_matriz} {yylval.string = strdup(yytext); return VARRAY;}
{v_estatica} {yylval.string = strdup(yytext); return VESTATICA;}
{v_dinamica} {yylval.string = strdup(yytext); return VDINAMICA;}

{bucle} {return FOR;}
{do_while} {return DOWHILE;}
{while} {return WHILE;}
{endfor} {return ENDFOR;}
{endwhile} {return ENDWHILE;}
{enddowhile} {return ENDDOWHILE;}

{else} {return ELSE;}
{else_if} {return ELSEIF;}
{si} {return IF;}
{closeIf} {return CLOSEIF;}


{c_mayorigual} {return MAYORIGUAL;}
{c_menorigual} {return MENORIGUAL;}
{c_mayor} {return MAYOR;}
{c_menor} {return MENOR;}
{c_igual} {return IGUAL;}
{c_distinto} {return DISTINTO;}
{c_and} {return AND;}
{c_or} {return OR;}


{m_de} {return DE;}
{m_suma} {yylval.string = strdup(yytext);return SUMA;}
{m_resta} {yylval.string = strdup(yytext);return RESTA;}
{m_multiplicacion} {yylval.string = strdup(yytext);return MULT;}
{m_division} {yylval.string = strdup(yytext);return DIV;}
{m_exponente} {yylval.string = strdup(yytext);return EXPONT;}
{m_raiz} {yylval.string = strdup(yytext);return RAIZ;}
{m_igual} {yylval.string = strdup(yytext);return IGUALM;}


{palabra} {yylval.string = strdup(yytext); return PALABRA;}


. {};
%%
