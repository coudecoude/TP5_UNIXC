CFLAGS=-g -Wall -I./include

#
# Link
#

bin/main: obj/file.o obj/hash.o obj/main.o
	gcc -o bin/main obj/file.o obj/hash.o obj/main.o


#
# Objets of TP Lists
#

obj/file.o: src/file.c include/functions.h include/types.h
	gcc $(CFLAGS) -c  src/file.c -o obj/file.o

obj/hash.o: src/hash.c include/functions.h
	gcc $(CFLAGS) -c src/hash.c -o obj/hash.o

obj/main.o: src/main.c include/functions.h include/types.h
	gcc $(CFLAGS) -c src/main.c -o obj/main.o


clean :
	rm obj/*.o bin/*

