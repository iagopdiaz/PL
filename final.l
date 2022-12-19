%{
#include <stdlib.h>
#include "final.tab.h"
%}
%option yylineno
espacios [ \n\t]+

numero [0-9]+

//Hacer una variable | "variable numero a"
//Por defecto estaticas salvo que se indique "variable" "dinamica"
var {variable}{tipo_var}{memoria_var}
variable "variable"
tipo_var {v_numero}{v_letras}{v_matriz}
memoria_var {v_estatica}{v_dinamica}
v_numero "numero"
v_letras "letras"
v_matriz "matriz"
v_estatica "estatica"
v_dinamica "dinamica"

//Hacer un bucle | "bucle 5 10" va de 5 a 10 | "bucle 10" va de 0 a 10
bucle "bucle"

//Hacer comparaciones | "si a mayor que b"
if "si"
mayor "mayor"
menor "menor"
and "y"
or "o"
igual "igual"

//Funciones matematicas | "sumar a y b en c"
//Por si se quiere guardar en alguna variable "en" si no guarda en la 1a
en "en" 
suma "sumar"
resta "restar"
multiplicacion "multiplicar"
division "dividir"
exponente "elevar"
raizcuadrada "raiz cuadrada"
raiz "raiz"
//raiz 3 de 27

//Funciones automaticas
funcion "funcion"


//Palabras para variables 
palabra [^ \n\t/{var}]+[A-Za-z]+

%%
{espacios} {}
{numero} {}

{variable} {}
{tipo_var} {}
{memoria_var} {}
{v_numero} {}
{v_letras} {}
{v_matriz} {}
{v_estatica} {}
{v_dinamica} {}


. {};
%%
