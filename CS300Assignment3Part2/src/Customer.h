#include <iostream>
using namespace std;

class Customer{
	string fname;
	string lname;
public:
	Customer();
	Customer(string f, string l);
	string getName();
	~Customer();
};
