all: abr

abr: abr.o pile.o file.o
	gcc -o abr abr.o pile.o file.o

abr.o: abr.c abr.h pile.h file.h
	gcc -Wall -c abr.c

pile.o: pile.h pile.c
	gcc -Wall -c pile.c

file.o: file.h file.c
	gcc -Wall -c file.c

clean:
	rm -f *.o *~ abr


