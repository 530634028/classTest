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
};               //ע�⣺����������ֺ�
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
	test.printData();
}
