CFLAGS=-Wall -ansi
LDFLAGS=-lncurses

scacchiera: main.o guess.o random.o

main.o: main.c
guess.o: guess.c guess.h 
random.o: random.c random.h

clean:
	rm -f *.o scacchiera
