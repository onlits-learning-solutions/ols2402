VPATH = ./lib

library: library.c library.a
	gcc -o library library.c library.a

library.a: book.c member.c transaction.c common.c
	gcc -c book.c
	gcc -c member.c
	gcc -c transaction.c
	gcc -c common.c
	ar -rc library.a book.o member.o transaction.o common.o

clean:
	rm *.o
	rm *.a