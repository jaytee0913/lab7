lab: main.o
	g++ -g -std=c++11 main.o -o lab

main.o: main.cpp LinkedList.h LinkedList.hpp Node.h Node.hpp
	g++ -g -std=c++11 -c main.cpp

clean:
	rm *.o lab