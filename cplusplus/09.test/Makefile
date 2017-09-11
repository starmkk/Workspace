CC = gcc
CFLAGS = -c -Wall 
LIBS =
LDFLAGS = 
SOURCES = $(shell ls *.c)
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = example

all : $(SOURCES) $(EXECUTABLE)


$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) $(LIBS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS)
