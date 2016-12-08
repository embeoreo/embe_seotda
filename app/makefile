app : player.o
	gcc -o app player.o -L../lib -lfuncs
player.o : player.c
	gcc -c player.c -I../include
clean :
	rm player.o app
