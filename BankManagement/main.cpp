#include<iostream>
#include"Customer.h"
#include<fstream>
#include<sstream>
#include<vector>
using std::cout;
using std::cin;
using std::string;
std::ifstream fin("database.txt",std::ios::app);
std::ofstream fout("database.txt", std::ios::app);
void RegisterCustomer(Customer);
void PrintCustomer();
int main()
{
	cout << "Welcome to the Bank Manager Assistant"
		<<"\nPlease select an option from the menu:"
		<<"\n1.Create user"
		<<"\n2.Access user"
		<<"\n3.Data about money\n";
	int meniuVar1; cin >> meniuVar1;
	Customer customer;
	switch (meniuVar1)
	{
	case 1:
		RegisterCustomer(customer);
		break;
	case 2:
		PrintCustomer();
		break;
	default:
		cout << "Please enter a valid option.";
		break;
	}
	cout << std::endl;
	return 0;
}

void RegisterCustomer(Customer c) {
	int age;
	std::string name;
	float sum;
	cout << "Your age is:"; cin >> age;
	cout << "Your name is:"; cin >> name;
	cout << "Your sum is:"; cin >> sum;
	c.SetAge(age);
	c.SetName(name);
	c.SetSum(sum);
	fout << c.GetAge()<<","<<c.GetName()<<","<<c.GetSum();
	fout.close();
}
void PrintCustomer() {
	string dataCustomer;
	
	while (std::getline(fin, dataCustomer, ','))
	{
			cout << dataCustomer<<" ";
	}
}