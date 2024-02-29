CC = gcc
CFLAGS = -O2 -Wall -I ..

all: adder adder_11

adder: adder.c
	$(CC) $(CFLAGS) -o adder adder.c

adder_11: adder_11.c
	$(CC) $(CFLAGS) -o adder_11 adder_11.c

clean:
	rm -f *~ *.o adder adder_11
