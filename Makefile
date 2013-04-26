#!/usr/bin/make -f

# generic flags
CC = gcc
CFLAGS = -Wall -Werror -O2
LIBS = 
LDFLAGS = -static

# source input/output
SOURCES    := ${wildcard *.c}
OBJECTS    := ${SOURCES:.c=.o}

# rules
libmeep.a: $(OBJECTS)
	ar cru libmeep.a $<
	ranlib $@

%.o: %.c
	$(CC) -c $(CFLAGS) $(LIBS) $(LDFLAGS) -o $@ $<

test: libmeep.a
	(cd tests; make && ./test)

clean:
	rm -f libmeep.a *.o


.PHONY = test clean
