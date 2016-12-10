CFLAGS=-Wall -ansi -pedantic
LDFLAGS=-lncurses

all: attrs attrs2

attrs: attrs.o
attrs.o: attrs.c

attrs2: attrs2.o
attrs2.o: attrs2.c

.PHONY: clean
clean:
	rm -f *.o attrs attrs2
