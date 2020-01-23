//operator overloading
//function overloading

#include <iostream>
using namespace std;
 
class Distance 
{
private:
      int cms;             // 0 to infinite
      int mtrs;           // 0 to 12
      
public:
      // required constructors
      Distance() {
         cms = 0;
         mtrs = 0;
      }

      Distance(int m) {
         mtrs = m;
         cms = 0;
      }

      Distance(int m, int c) {
         mtrs = m;
         cms = c;
      }

      Distance(const Distance& obj) {
         this->mtrs = obj.mtrs;
         this->cms = obj.cms;
      }

      Distance(const Distance *obj) {
         this->mtrs = obj->mtrs;
         this->cms = obj->cms;
      }
      
      // method to display distance
      void displayDistance() {
         cout << "mtrs: " << mtrs << " cms:" << cms <<endl;
      }
      
      // overloaded minus (-) operator
      Distance operator- (const Distance& obj) {
	 Distance t;
         t.mtrs = this->mtrs - obj.mtrs;
         t.cms = this->cms - obj.cms;
         return t;
      }
      // overloaded + operator
      Distance operator+ (const Distance& obj) {
	 Distance t;
         t.mtrs = this->mtrs + obj.mtrs;
         t.cms = this->cms + obj.cms;
         return t;
      }
};

int main() {
   Distance D1(11, 10), D2(-5, 11);
 
   Distance D4;              
   D1.displayDistance();    // display D1
   D2.displayDistance();    // display D2
   D4 = D1 - D2;	        //d1-d2
   D4.displayDistance();    // display D4
   
   Distance D3;
   D3 = D1 + D2;
   D3.displayDistance();    // display D2

   return 0;
}
