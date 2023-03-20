CC = gcc
CFLAGS = -g -Wall
EXE = lab8test
HEADERS = linkedlist.h
CODE = linkedlist.c lab8example.c

OBJECTS = $(CODE:.c=.o)

lab8: $(OBJECTS) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXE)

clean:
	rm -f *.o *.exe *.out