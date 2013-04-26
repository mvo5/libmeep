#!/usr/bin/make -f

LIBMEEP = ../libmeep.a

CFLAGS = -I.. -g -O2 -Wall -Werror
LIBS = $(LIBMEEP)

test: *.c $(LIBMEEP)
	gcc $(CFLAGS) -o $@ $<  $(LIBS)

clean:
	rm -f test
