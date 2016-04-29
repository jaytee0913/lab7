lab: main.o Test.o
	g++ -g -std=c++11 main.o Test.o -o lab

main.o: main.cpp LinkedList.h LinkedList.hpp Node.h Node.hpp Test.h
	g++ -g -std=c++11 -c main.cpp

Test.o: Test.h Test.cpp
	g++ -std=c++11 -g -c Test.cpp

clean:
	rm *.o lab