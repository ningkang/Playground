#compiler to use
CC = cc
#compiler options
CFLGAS=-Wall -g
LDFLAGS=
SOURCES= ex15.c
OBJECTS=$(SOURCES)
EXECUTABLE=hello

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE):
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

#.c:
#	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(EXECUTABLE)
