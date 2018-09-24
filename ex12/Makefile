CFLAGS=-Wall -g
SPLINT_FLAGS = +bounds +likelybounds

all: ex12

clean:
	rm -f ex12

splint: ex12
	splint $(SPLINT_FLAGS) ex12.c
