COMPILER = gcc
FLAGS =  -Wall -Werror

.PHONY: clean all

all: bin/main


-include build/*.d

bin/main: build/main.o build/board.o build/cmove.o
	$(COMPILER) $(FLAGS) -o $@ $^ 

build/main.o: src/main.c
	$(COMPILER) $(FLAGS) -MMD -c -o $@ $<

build/board.o: src/board.c
	$(COMPILER) $(FLAGS) -MMD -c -o $@ $<

build/cmove.o: src/cmove.c
	$(COMPILER) $(FLAGS) -MMD -c -o $@ $<

clean:
	rm build/*