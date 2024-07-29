CC = gcc
CFLAGS = -Wall -Wextra -pedantic
LDFLAGS = -lSDL2

TARGET = main

all: $(TARGET)

$(TARGET): main.o
	$(CC) -o $(TARGET) main.o $(LDFLAGS)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f $(TARGET) *.o
