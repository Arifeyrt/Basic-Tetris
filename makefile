target:	test

test:	test.cpp tetromino.h
	g++ -std=c++11 test.cpp tetromino.cpp -o d

clean:
		rm d
