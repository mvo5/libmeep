#!/usr/bin/make -f

all:
%.o: *.c
	gcc -ggdb -g3 -O0 -o $@ $<

