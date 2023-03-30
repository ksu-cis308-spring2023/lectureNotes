CC = gcc
CFLAGS = -g -Wall
EXE = lab9
HEADERS = types.h stack.h linkedlist.h
CODE = lab9example.c stack.c linkedlist.c

OBJECTS = $(CODE:.c=.o)

target: $(OBJECTS) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXE)

clean:
	rm -f *.o *.exe *.out