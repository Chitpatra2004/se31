#include<iostream>
using namespace std;

class Vehicle{
	virtual wheel()=0;
	virtual colour()=0;
};
class Bike:public Vehicle{
	public:
		wheel()
		{
			cout<<"Bike have two wheel"<<endl;
		}
		colour()
		{
			cout<<"bike colour is black"<<endl;
		}
};
class Car:public Vehicle{
	public:
		wheel()
		{
			cout<<"car have 4 wheel"<<endl;
		}
		colour()
		{
			cout<<"car colour is neavy blue"<<endl;
		}
};
class Auto:public Vehicle{
	public:
		wheel()
		{
			cout<<"Auto have 3 wheel"<<endl;
		}
		colour()
		{
			cout<<"Auto colour is yellow"<<endl;
		}
};

main()
{
	Bike obj1;
	obj1.wheel();
	obj1.colour();
	Car obj2;
	obj2.wheel();
	obj2.colour();
	Auto obj3;
	obj3.wheel();
	obj3.colour();
	
}
