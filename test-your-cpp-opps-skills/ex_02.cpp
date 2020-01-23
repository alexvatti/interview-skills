//class constructor,destructor example
//constructor,destructor : public
//initlization of members: constructor
//dynamic creation of object

#include<iostream>
#include<string>
using namespace std;

class line 
{
private:
	int x,y;

public:
	line()
	{
		x=0;
		y=0;
		cout<<"i am a line constructor\n";
	}


	line(int i)
	{
		x=i;
		y=0;
	}

	line(int i  ,int j )
	{
		x=i;
		y=j;
	}

	line(const line& obj)
	{
		this->x=obj.x;
		this->y=obj.y;
	}

	line(const line* obj)
	{
		this->x=obj->x;
		this->y=obj->y;
	}

	void display()
	{
		cout<<this->x<<" "<<this->y<<endl;
	}
	~line()
	{
		cout<<"i am a line destructor\n";
	}
};

int main()
{
	line *l1= new line(10);
	line *l2 = new line(20,30);
	line *l3= new line(l2);
	l1->display();
	l2->display();
	l3->display();
	delete l1;
	delete l2;
	delete l3;
	line s(40);
	s.display();
}
