#
## Makefile for Poker
#
#

CC     = gcc
CFLAGS = -g -Wall -Wstrict-prototypes -ansi -pedantic

cards: cards.o
	$(CC) cards.o -o cards

cards.o: cards.c
	$(CC) $(CFLAGS) -c cards.c

