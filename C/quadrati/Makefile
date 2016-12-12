CFLAGS=-Wall -ansi
LDFLAGS=-lncurses

quadrati: main.o quadrati.o 
	gcc main.o quadrati.o -o quadrati

main.o:main.c
quadrati.o:quadrati.c
clean:
	rm -f *.o quadrati
