#compiler to use
CC = cc
#compiler options
CFLGAS=-Wall -g
LDFLAGS=
SOURCES= ex18.c
OBJECTS=$(SOURCES)
EXECUTABLE=hello

all: $(SOURCES) $(EXECUTABLE)
#all: ex19

#ex19: object.o

$(EXECUTABLE):
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

clean:
	rm -f $(EXECUTABLE)
