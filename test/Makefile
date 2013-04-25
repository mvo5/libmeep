#!/usr/bin/make -f

CFLAGS = -I..


test: *.c ../meep.c
	gcc $(CFLAGS) -o $@ $< ../meep.c

clean:
	rm -f test
