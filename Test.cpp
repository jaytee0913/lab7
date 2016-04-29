#include "Test.h"

using namespace std;

Test::Test()
{
	
}

void Test::runTests()
{
	test1();
	test2();
}

bool Test::test1()
{
	LinkedList list;

	cout << "Test 1: size of empty list is zero: ";
	if(list.size() == 0)
	{
		cout << "TRUE" << endl;
	}
	else
	{
		cout << "FALSE" << endl;
	}
	return(list.size() == 0);
}

bool Test::test2()
{
	LinkedList list;

	list.addFront(0);

	cout << "Test 2: correct size after adding once: ";
	if(list.size() == 1)
	{
		cout << "TRUE" << endl;
	}
	else
	{
		cout << "FALSE" << endl;
	}
	return(list.size() == 1);
}

bool Test::test3()
{

}

bool Test::test4()
{

}

bool Test::test5()
{

}

bool Test::test6()
{

}

bool Test::test7()
{

}

bool Test::test8()
{

}

bool Test::test9()
{

}

bool Test::test10()
{

}

bool Test::test11()
{

}

bool Test::test12()
{

}

bool Test::test13()
{

}

bool Test::test14()
{

}

bool Test::test15()
{

}