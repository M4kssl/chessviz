COMPILER = gcc
FLAGS =  -Wall -Werror

.PHONY: clean all


all: bin/main

test: bin/main-test

-include build/*.d

bin/main: build/main.o build/board.o build/cmove.o build/figures.o
	$(COMPILER) $(FLAGS) -o $@ $^ 

build/main.o: src/main.c
	$(COMPILER) $(FLAGS) -MMD -c -o $@ $<

build/board.o: src/board.c
	$(COMPILER) $(FLAGS) -MMD -c -o $@ $<

build/cmove.o: src/cmove.c
	$(COMPILER) $(FLAGS) -MMD -c -o $@ $<

build/figures.o: src/figures.c
	$(COMPILER) $(FLAGS) -MMD -c -o $@ $<

	-include test/*.d

bin/main-test: test/main.o test/figures.o test/test.o
	$(COMPILER) $(FLAGS) -o $@ $^

test/main.o: test/main.c
	$(COMPILER) -I thirdparty -I src $(FLAGS) -MMD -c -o $@ $<

test/test.o: test/test.c
	$(COMPILER) -I thirdparty -I src $(FLAGS) -MMD -c -o $@ $<

test/figures.o: src/figures.c
	$(COMPILER) -I thirdparty -I src $(FLAGS) -MMD -c -o $@ $<



clean:
	rm build/*