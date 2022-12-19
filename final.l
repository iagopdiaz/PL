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
variable "variable"
tipo_var {v_numero}{v_letras}{v_matriz}
memoria_var {v_estatica}{v_dinamica}
v_numero "numero"
v_letras "letras"
v_matriz "matriz"
v_estatica "estatica"
v_dinamica "dinamica"

/*Hacer un bucle | "bucle 5 10" va de 5 a 10 | "bucle 10" va de 0 a 10*/
bucle "bucle"

/*Hacer comparaciones | "si a mayor que b"*/
if {si}{else}{comparador}
else "si no"
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


/*Funciones matematicas | "sumar a mas b en c"
Ir por la rama sumar | a,mas y b llegan como palabra pero solo usamos $0 y $2 asi no usamos "mas"
Por si se quiere guardar en alguna variable "en" si no guarda en la 1a*/
math {m_en}{m_suma}{m_resta}{m_multiplicacion}{m_division}{m_exponente}{m_raizcuadrada}{m_raiz}{m_igual}
m_en "en" 
m_suma "sumar"
m_resta "restar"
m_multiplicacion "multiplicar"
m_division "dividir"
m_exponente "elevar"
m_raizcuadrada "raiz cuadrada"
m_raiz "raiz"
m_igual "igual"
/*raiz 3 de 27*/

/*Funciones automaticas*/
funcion "funcion"


/*Palabras para variables*/
palabra [^ \n\t/{var}{bucle}{if}{math}]+[A-Za-z]+

%%
{espacios} {}
{numero} {printf("numero: %s \n",strdup(yytext));}

{variable} {}
{tipo_var} {/*no haría falta, poner como no terminal en bison*/}
{memoria_var} {/*no haría falta, poner como no terminal en bison*/}
{v_numero} {}
{v_letras} {}
{v_matriz} {}
{v_estatica} {}
{v_dinamica} {}

{bucle} {}

{else} {}
{si} {}
{comparador} {/*no haría falta, poner como no terminal en bison*/}
{c_mayorigual} {}
{c_menorigual} {}
{c_mayor} {}
{c_menor} {}
{c_igual} {}
{c_distinto} {}
{c_and} {}
{c_or} {}

{math} {/*no haría falta, poner como no terminal en bison*/}
{m_en} {}
{m_suma} {}
{m_resta} {}
{m_multiplicacion} {}
{m_division} {}
{m_exponente} {}
{m_raizcuadrada} {}
{m_raiz} {}
{m_igual} {}

palabra {}
. {};
%%
