COMPILER = gcc
FLAGS =  -Wall -Werror

.PHONY: clean all


all: bin/main

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

	-include build-test/*.d

bin/main-test: build-test/main.o build-test/figures.o build-test/tests.o
	$(COMPILER) $(FLAGS) -o $@ $^

build-test/main.o: test/main.c
	$(COMPILER) -I thirdparty -I sources $(FLAGS) -MMD -c -o $@ $<

build-test/tests.o: test/tests.c
	$(COMPILER) -I thirdparty -I sources $(FLAGS) -MMD -c -o $@ $<

build-test/move.o: src/figures.c
	$(COMPILER) -I thirdparty -I sources $(FLAGS) -MMD -c -o $@ $<




clean:
	rm build/*