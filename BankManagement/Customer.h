#pragma once
#include<string>
#include<iostream>
class Customer
{
private:
	int age;
	std::string name;
	float sum;
public:
	void SetAge(int);
	void SetName(std::string);
	void SetSum(float);
	int GetAge();
	std::string GetName();
	float GetSum();
	friend std::ostream& operator<<(std::ostream&, Customer&);
};

