FUENTE = final
PRUEBA = ejemplo.txt
LIB = lfl

all: compile run

flex:
	flex $(FUENTE).l
	gcc -o $(FUENTE) lex.yy.c -lfl
	./$(FUENTE) < $(PRUEBA)
	
compile:
	flex $(FUENTE).l
	bison -o $(FUENTE).tab.c $(FUENTE).y -yd 
	gcc -o $(FUENTE) lex.yy.c $(FUENTE).tab.c -$(LIB) -ly

run:
	./$(FUENTE) < $(PRUEBA) 

out:
	./$(FUENTE) < $(PRUEBA) > salida.c

run2:
	./$(FUENTE) $(PRUEBA)

clean:
	rm $(FUENTE) lex.yy.c $(FUENTE).tab.c $(FUENTE).tab.h

