#include <iostream>
#include <stdio.h>

#include <stdlib.h>
#include <math.h>
#include <vector>              
#include <fstream>
#include <string>
#include <cstdlib>


using namespace std;

class Test
{
public:
	 Test();
	 ~Test();
	void printData();
private:
	int a;
};               //注意：别忘了这个分号
 Test::Test()
{
	a = 1;
}
 void Test::printData()
{
	cout<<a<<endl;
}
 Test::~Test()
 {

 }
void main()
{
	Test test;
	//test.Test(1);
	cout << " hello world " << endl;
	cout << " yes it is! " << endl;
	test.printData();
	std::cout << "Test for commit, Hello World! " << std::endl;
}
