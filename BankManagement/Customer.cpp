#include "Customer.h"
using std::string;
void Customer::SetAge(int age) {
	this->age = age;
}
void Customer::SetName(string name) {
	this->name = name;
}
void Customer::SetSum(float sum) {
	this->sum = sum;
}
int Customer::GetAge() {
	return age;
}
string Customer::GetName() {
	return name;
}
float Customer::GetSum() {
	return sum;
}
std::ostream& operator<<(std::ostream& o, Customer& person) {
	o << "The age is:" << person.GetAge() << "\nthe name is:" << person.GetName() << "\nthe sum of money is:" << person.GetSum();
	return o;
}