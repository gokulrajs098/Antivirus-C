flags=-O2 -Wall -std=c2x
ldflags=-lbu

.PHONY: all clean

all: clean birdlfu

birdlfu: birdlfu.o
	cc $(flags) $^ -o $@ $(ldflags)

birdlfu.o: birdlfu.c birdlfu.h
	cc $(flags) -c $<

clean:
	rm -f *.o birdlfu