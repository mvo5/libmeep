#!/usr/bin/make -f

CFLAGS = -I.. -g -O2 -Wall -Werror


test: *.c ../meep.c
	gcc $(CFLAGS) -o $@ $< ../meep.c

clean:
	rm -f test
