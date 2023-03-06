CC = gcc
CFLAGS = -g -Wall
EXE = lab7test
HEADERS = person.h
CODE = person.c lab7example.c

OBJECTS = $(CODE:.c=.o)

lab7: $(OBJECTS) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXE)

clean:
	rm -f *.o *.exe *.out