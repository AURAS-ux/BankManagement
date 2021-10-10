#include<iostream>
#include"Customer.h"
using std::cout;
using std::cin;

int main()
{
	cout << "Welcome to the Bank Manager Assistant";
	Customer c;
	c.SetAge(19);
	c.SetName("Andrei");
	c.SetSum(199.90);
	cout << c;
	return 0; 
}