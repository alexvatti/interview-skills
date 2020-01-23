//override:
#include <iostream>
using namespace std;

//base class
class BaseClass {
public:
   void disp(){
      cout<<"Function of Parent Class\n";
   }
};

//derived class
class DerivedClass: public BaseClass {
public:
   void disp() {
      cout<<"Function of Child Class\n";
   }
};

int main() {
   DerivedClass obj = DerivedClass();
   obj.disp();  //child class funtion get called

   BaseClass obj1 = DerivedClass(); 
   obj1.disp(); //parent class function get called
   return 0;
}
