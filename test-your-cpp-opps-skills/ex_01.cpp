
//class constructor,destructor example
//constructor,destor : public
#include<iostream>
#include<string>
using namespace std;

class line 
{
public:
	line()
	{
		cout<<"i am a line constructor\n";
	}

	~line()
	{
		cout<<"i am a line destructor\n";
	}
};

int main()
{
	line *l1=new line; //dynamic
	delete l1;
	
	line l2; //static
}
