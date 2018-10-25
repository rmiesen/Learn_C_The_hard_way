CFLAGS=-Wall -g
SPLINT_FLAGS = +bounds +likelybounds

all: ex13 splint

clean:
	rm -f ex13

splint: ex13
	splint $(SPLINT_FLAGS) ex13.c
