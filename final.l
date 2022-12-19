%{
#include <stdlib.h>
#include "final.tab.h"
%}
%option yylineno
espacios [ \n\t]+

numero [0-9]+

//Hacer un bucle
bucle "bucle"


//Hacer una variable
variable "variable"
v_numero	"numero"
v_letras	"letras"
v_matriz	"matriz"

palabra [^ \n\t/{bucle}{variable}{numero}{letras}{matriz}]+[A-Za-z]+

%%
{espacios} {}

. {};
%%
