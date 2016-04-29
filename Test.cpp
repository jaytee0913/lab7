#include "Test.h"

using namespace std;

Test::Test()
{
	
}

void Test::runTests()
{
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	test8();
	test9();
	test10();
	test11();
	test12();
	test13();
	test14();
}

bool Test::test1()
{
	LinkedList<int> list;

	cout << "Test 1: size of empty list is zero: ";
	if(list.size() == 0)
	{
		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
		cout << "Size should be 0." << endl;
		cout << "Actual size: " << list.size() << endl;
	}
	return(list.size() == 0);
}

bool Test::test2()
{
	LinkedList<int> list;

	list.addFront(0);

	cout << "Test 2: correct size after addFront once: ";
	if(list.size() == 1)
	{
		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
		cout << "Size should be 1." << endl;
		cout << "Actual size: " << list.size() << endl;
	}
	return(list.size() == 1);
}

bool Test::test3()
{
	bool flag = false;
	LinkedList<int> list;

	cout << "Test 3: correct size returned after multiple addFronts: ";

	for(int i = 0; i < 7; i++)
	{
		list.addFront(i);
	}
	if(list.size() == 7)
	{
		flag = true;
		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
		cout << "Size should be 7." << endl;
		cout << "Actual size: " << list.size() << endl;
	}
	return flag;
}

bool Test::test4()
{
	LinkedList<int> list;

	list.addBack(0);

	cout << "Test 4: correct size after addBack once: ";
	if(list.size() == 1)
	{
		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
		cout << "Size should be 1." << endl;
		cout << "Actual size: " << list.size() << endl;
	}
	return(list.size() == 1);
}

bool Test::test5()
{
	bool flag = false;
	LinkedList<int> list;

	cout << "Test 5: correct size returned after multiple addBacks: ";

	for(int i = 0; i < 7; i++)
	{
		list.addBack(i);
	}
	if(list.size() == 7)
	{
		flag = true;
		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
		cout << "Size should be 7." << endl;
		cout << "Actual size: " << list.size() << endl;
	}
	return flag;
}

bool Test::test6()
{
	LinkedList<int> list;
	bool flag;
	int testSize = 0;

	cout << "Test 6: size is correct after adds and removeFront: ";

	for(int i = 0; i < 12; i++)
	{
		if(i < 5)
		{
			list.addBack(i);
			testSize++;
		}
		else if(i < 9)
		{
			list.addFront(i);
			testSize++;
		}
		else
		{
			list.removeFront();
			testSize--;
		}
	}

	if(list.size() == testSize)
	{
		flag = true;
		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
		cout << "Size should be: " << testSize << endl;
		cout << "Actual size: " << list.size() << endl;
	}
	return flag;
}

bool Test::test7()
{
	LinkedList<int> list;
	bool flag;
	int testSize = 0;

	cout << "Test 7: size is correct after adds and removeBack: ";

	for(int i = 0; i < 19; i++)
	{
		if(i < 7)
		{
			list.addBack(i);
			testSize++;
		}
		else if(i < 13)
		{
			list.addFront(i);
			testSize++;
		}
		else
		{
			list.removeBack();
			testSize--;
		}
	}

	if(list.size() == testSize)
	{
		flag = true;
		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
		cout << "Size should be: " << testSize << endl;
		cout << "Actual size: " << list.size() << endl;
	}
	return flag;
}

bool Test::test8()
{
	LinkedList<int> list;
	bool flag = false;

	cout << "Test 8: search returns false on an empty list: ";

	if(!list.search(13))
	{
		flag = false;
		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
	}
	return flag;
}

bool Test::test9()
{
	LinkedList<int> list;
	bool flag = false;

	cout << "Test 9: search returns false when the specified value is not in the list: ";

	for(int i = 0; i < 13; i++)
	{
		list.addBack(i);
	}
	if(!list.search(19))
	{
		flag = true;
		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
	}
	return flag;
}

bool Test::test10()
{
	LinkedList<int> list;
	bool flag = false;

	cout << "Test 10: search returns true if value is in the list: ";

	for(int i = 0; i < 13; i++)
	{
		list.addBack(i);
	}
	if(list.search(7))
	{
		flag = true;
		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
	}
	return flag;
}

bool Test::test11()
{
	LinkedList<int> list;

	cout << "Test 11: check if addFront adds correct value to the vector: ";
	list.addFront(1);
	vector<int> temp = list.toVector();
	vector<int> test;
	test.push_back(1);
	if(temp == test)
	{
		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
	}
	return (temp == test);
}

bool Test::test12()
{
	LinkedList<int> list;

	cout << "Test 12: check if addBack adds correct value to the vector: ";
	list.addBack(1);
	vector<int> temp = list.toVector();
	vector<int> test;
	test.push_back(1);
	if(temp == test)
	{
		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
	}
	return (temp == test);
}

bool Test::test13()
{
	LinkedList<int> list;

	cout << "Test 13: check if multiple addFronts adds correct values to the vector: ";
	list.addFront(1);
	list.addFront(2);
	list.addFront(3);
	list.addFront(4);
	list.addFront(5);
	vector<int> temp = list.toVector();
	vector<int> test;
	test.push_back(5);
	test.push_back(4);
	test.push_back(3);
	test.push_back(2);
	test.push_back(1);

	if(temp == test)
	{
		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
		cout << "addFront vector: ";
		for(int i = 0; i < temp.size(); i++)
		{
			cout << temp[i] << " ";
		}
		cout << "\n";
		cout << "correct vector: ";
		for(int i = 0; i < test.size(); i++)
		{
			cout << test[i] << " ";
		}
		cout << "\n";
	}

	return (temp == test);
}

bool Test::test14()
{
	LinkedList<int> list;

	cout << "Test 14: check if multiple addBacks adds correct values to the vector: ";
	list.addBack(1);
	list.addBack(2);
	list.addBack(3);
	list.addBack(4);
	list.addBack(5);
	vector<int> temp = list.toVector();
	vector<int> test;
	test.push_back(1);
	test.push_back(2);
	test.push_back(3);
	test.push_back(4);
	test.push_back(5);

	if(temp == test)
	{
		cout << "PASS" << endl;
	}
	else
	{
		cout << "FAIL" << endl;
		cout << "addBack vector: ";
		for(int i = 0; i < temp.size(); i++)
		{
			cout << temp[i] << " ";
		}
		cout << "\n";
		cout << "correct vector: ";
		for(int i = 0; i < test.size(); i++)
		{
			cout << test[i] << " ";
		}
		cout << "\n";
	}

	return (temp == test);
}

bool Test::test15()
{

}
