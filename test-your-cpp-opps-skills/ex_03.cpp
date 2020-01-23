//public member data and member functions, i can access any where in the program
#include <iostream>
#include <string>
using namespace std;

class Car {
  public:
    string brand;
    string model;
    int year;
};

int main() {
  Car carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  Car *carObj2 = new Car;
  carObj2->brand = "Ford";
  carObj2->model = "Mustang";
  carObj2->year = 1969;

  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2->brand << " " << carObj2->model << " " << carObj2->year << "\n";
  delete carObj2;
  return 0;
}
