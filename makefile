## COPYRIGHT (C) HARRY CLARK 2024

## SEGA MEGA DRIVE EMULATOR FRONTEND

CC 				= gcc
CFLAGS 			= -Wall -Wextra -pedantic
LDFLAGS 		= -lSDL2

TARGET 			= MDEMU

all: $(TARGET)

$(TARGET): main.o
	$(CC) -o $(TARGET) main.o $(LDFLAGS)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f $(TARGET)
