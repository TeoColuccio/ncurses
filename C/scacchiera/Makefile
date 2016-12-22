CFLAGS=-Wall -ansi
LDFLAGS=-lncurses

scacchiera: main.o scacchiera.o 
	gcc main.o scacchiera.o -o scacchiera

main.o:main.c
scacchiera.o:scacchiera.c
clean:
	rm -f *.o scacchiera
