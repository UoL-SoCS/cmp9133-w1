all: a.out

a.out:
	g++ -std=c++11 hello_world_test.cpp

test: a.out
	./a.out

clean:
	rm a.out