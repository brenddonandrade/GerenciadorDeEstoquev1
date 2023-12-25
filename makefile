#!/bin/usr

# compiler
CC = g++
CFLAGS =  
LIBS =
DEPS = ./include/core/*.h 
SRC = pessoa.cpp
OBJ = pessoa.o


programa: $(OBJ) $(CFLAGS)
       $(CC) -o $@ $^ $(CFLAGS)

$(DOBJ)/$(OBJ): $(DSRC)/$(SRC) $(DEPS)
        $(CC) -c -o $@ $< $(CFLAGS)


.PHONY: clean
clean:
	rm programa $(OBJ)
