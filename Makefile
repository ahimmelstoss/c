# `make` automatically assumes there's a file called Makefile and will just run it. 

CFLAGS=-Wall -g

#target name: what you have to build to satisfy target
all: ex1 ex3 ex5 ex6 ex7 ex8 ex9 ex10

clean:
	rm -f ex1
	rm -f ex3
	rm -f ex5
	rm -f ex6
	rm -f ex7
	rm -f ex8
	rm -f ex9
	rm -f ex10