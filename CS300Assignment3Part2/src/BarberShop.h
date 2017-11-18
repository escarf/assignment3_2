#include "LinkedStack.h"
#include "Customer.h"
using namespace std;
class BarberShop{
	 LinkedStack<Customer> s1;
	 LinkedStack<Customer> s2;
     public:
	 	 BarberShop();
	 	 void addCustomer(Customer&);
         Customer nextCustomer();
         ~BarberShop();
};
