//BarberShop.cpp
#include <iostream>
#include "BarberShop.h"

void BarberShop::addCustomer(Customer& customer){
//write your code here
	s1.push(customer);

}
Customer BarberShop::nextCustomer(){
//write your code here

	Customer result;
	Customer temp;

	// returns a "default" customer if s1 is empty
	if(s1.isEmpty()) {
		return result;
	}

	// pop all from s1 into s2
	while(!s1.isEmpty()) {
		temp = s1.pop();
		s2.push(temp);
	}

	// pop top customer from s2 to "result"
	result = s2.pop();

	// pop rest of s2 back to s1
	while(!s2.isEmpty()) {
		temp = s2.pop();
		s1.push(temp);
	}

	return result;
}

BarberShop::BarberShop() {
}

BarberShop::~BarberShop() {
}
