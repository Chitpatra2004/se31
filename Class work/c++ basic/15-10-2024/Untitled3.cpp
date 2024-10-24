#include<iostream>
using namespace std;

class  A{
	private:
		int a,b;
		friend class B;  // declare
};

class B{
	public:
		fetch(A & obj)
	{
		
		cout<<"enter A :";
		cin>>obj.a;
		cout<<"enter B :";
		cin>>obj.b;
		
		
		cout<<"addition is :"<<obj.a+obj.b;
	}
};


main()
{
	A obj;
	B obj1;
	obj1.fetch(obj);
	
}
