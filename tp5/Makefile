CFLAGS=-g -Wall -I./include

#
# Link
#

bin/test_list: obj/list.o obj/test_list.o
	gcc -o bin/test_list obj/list.o obj/test_list.o


#
# Objets of TP Lists
#

obj/list.o: src/list.c include/list.h
	gcc $(CFLAGS) -c  src/list.c -o obj/list.o

obj/test_list.o: src/test_list.c
	gcc $(CFLAGS) -c src/test_list.c -o obj/test_list.o

#
# Listing creation in pdf
#

listing:
# To be completed

#
# Remove files
#

clean :
	rm obj/*.o bin/*

#
# Test the functionality 
#

test :
# To be completed
