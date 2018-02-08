CC=c89

main: main.o
	$(CC) main.o -lc -o main

main.o: public.h private.h main.c
	$(CC) -I. -c main.c 
clean:
	-@rm -f main
	-@rm -f main.o 
