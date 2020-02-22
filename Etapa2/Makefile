CC = g++
CFLAGS = -Wall -Wextra -O2
LDLIBS = -lm

build_in: in_generator
	g++ in_generator.cpp -o in_generator

generate_in:
	./in_generator > newTest.in

build_out: out_generator
	g++ out_generator.cpp -o out_generator

generate_out:
	./out_generator < newTest.in > newTest.out

run:
	./tester

build_algo1: algo1.o tester.o
	g++ algo1.o tester.o -o tester $(CFLAGS)

build_algo2: algo2.o tester.o
	g++ algo2.o tester.o -o tester $(CFLAGS)	

build_algo3: algo3.o tester.o
	g++ algo3.o tester.o -o tester $(CFLAGS)

algo.o: algo1.cpp
	g++ algo1.cpp -c $(CFLAGS)

algo2.o: algo2.cpp
	g++ algo2.cpp -c $(CFLAGS)	

algo3.o: algo3.cpp
	g++ algo3.cpp -c $(CFLAGS)

tester.o: tester.cpp
	g++ tester.cpp -c $(CFLAGS)

.PHONY: clean
clean:
	rm -rf *.o tester in_generator out_generator newTest.in newTest.out
