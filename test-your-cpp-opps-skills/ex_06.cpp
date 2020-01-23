//multilevel inheritance
//Multilevel Inheritance: In this type of inheritance, 
//a derived class is created from another derived class
#include <iostream> 
using namespace std; 

// base class 
class Vehicle 
{ 
public: 
	Vehicle() 
	{ 
		cout << "This is a Vehicle" << endl; 
	} 
};
//derived class 
class fourWheeler: public Vehicle 
{ 
public: 
	fourWheeler() 
	{ 
		cout<<"Objects with 4 wheels are vehicles"<<endl; 
	} 
};
 
// sub class derived from two base classes 
class car: public fourWheeler
{ 
public: 
	car() 
	{ 
		cout<<"Car has 4 Wheels"<<endl; 
	} 
}; 

// main function 
int main() 
{ 
	//creating object of sub class will 
	//invoke the constructor of base classes 
	car obj; 
	return 0; 
} 

