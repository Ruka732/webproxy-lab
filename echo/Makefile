CC = gcc
CFLAGS = -g -Wall
LDFLAGS = -lpthread

all: echoClient echoServer

csapp.o: csapp.c csapp.h
	$(CC) $(CFLAGS) -c csapp.c

echoClient.o: echoClient.c csapp.h
	$(CC) $(CFLAGS) -c echoClient.c

echoServer.o: echoServer.c csapp.h
	$(CC) $(CFLAGS) -c echoServer.c

echoClient: echoClient.o csapp.o
	$(CC) $(CFLAGS) echoClient.o csapp.o -o echoClient $(LDFLAGS)

echoServer: echoServer.o csapp.o
	$(CC) $(CFLAGS) echoServer.o csapp.o -o echoServer $(LDFLAGS)
	
clean:
	rm -f *~ *.o echoClient echoServer core *.tar *.zip *.gzip *.bzip *.gz