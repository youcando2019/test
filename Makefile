CC = gcc -I./include
CFLAG = -Wall -g -lm

all: result clear

result: main.o src/*.o
	$(CC) *.o -o result $(CFLAG)
    
%.o: %.c
	$(CC) -c $^ $(CFLAG)

clear:
	rm *.o

run:
	./result
