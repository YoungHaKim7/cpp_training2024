CC=gcc
CFLAGS=-g3 -Wall

all:

test: test-stack
	./test-stack 
	@echo OK!

test-stack: test-stack.o tester.o stack.o
	$(CC) $(CFLAGS) -o $@ $^

test-stack.o: stack.h tester.h
stack.o: stack.h