

OBJS = Painting.o main.o


CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

PaintingManager: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o PaintingManager

Painting.o: Painting.cpp Painting.h
	$(CC) $(CFLAGS) Painting.cpp

main.o: main.cpp Painting.h
	$(CC) $(CFLAGS) main.cpp

clean:
	\rm *.o PaintingManager




