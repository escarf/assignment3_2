#include "Customer.h"
Customer::Customer() {
	fname = "";
	lname = "";
}

Customer::Customer(string f, string l) {
	fname = f;
	lname = l;
}

string Customer::getName() {
	string result = fname + " " + lname;
	return result;
}

Customer::~Customer() {
}
