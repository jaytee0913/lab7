#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <vector>
#include "LinkedList.h"

class Test
{
public:
	Test();
	void runTests();

	bool test1(); //size of empty list is zero
	bool test2(); //size after 1 addFront
	bool test3(); //size after multiple addFront is correct
	bool test4(); //size after 1 addBack
	bool test5(); //size after multiple addBacks is correct
	bool test6(); //size is correct after adds and removeFront
	bool test7(); //size is correct after adds and removeBack
	bool test8(); //search returns false on an empty list
	bool test9(); //search returns false when the specified value is not in the list
	bool test10(); //search returns true if value is in the list
	bool test11(); //check if addFront adds correct value to the vector:
	bool test12(); //check if addBack adds correct value to the vector:
	bool test13(); //check if multiple addFronts adds correct values to the vector:
	bool test14(); //check if multiple addBacks adds correct values to the vector:
	bool test15(); //check if multiple removeBacks on populated list returns same vector:
	bool test16(); //check if multiple removeFronts on populated list returns same vector:
};

#endif
