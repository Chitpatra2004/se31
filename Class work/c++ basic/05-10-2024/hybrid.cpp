#include<iostream>
using namespace std;

class A{
	public:
	myfun()
	{
		cout<<"Hello"<<endl;
	}
};
class B:public A{
	public:
	myfun()
	{
		A::myfun();  //scope resolution operator
		cout<<"Welcome"<<endl;
	}
};
class C{
	public:
		myfun()
		{
			cout<<"this is child class"<<endl;
		}
};
class D:public B,public C{
	public:
		myfun()
		{
			cout<<"tops"<<endl;
		}
};


main()
{
	D obj;
	obj.myfun();
}
