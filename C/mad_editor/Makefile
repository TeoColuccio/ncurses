CFLAGS=-Wall -ansi -pedantic
LDFLAGS=-lncurses

main: main.o mad_editor.o random.o 

main.o: main.c mad_editor.h

mad_editor.o: mad_editor.c mad_editor.h random.h

random.o: random.c random.h

.PHONY: clean
clean:
	rm -f *.o main
