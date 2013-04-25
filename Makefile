#!/usr/bin/make -f

CFAGS = -Wall -Werror -O2

all:
%.o: *.c
	gcc $(CFLAGS) -o $@ $<

