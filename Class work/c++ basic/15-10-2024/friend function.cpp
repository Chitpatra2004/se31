#include<iostream>
using namespace std;

class  A{
	private:
		int a,b;
		friend fetch(A & obj);  // declare
};


		fetch(A & obj)
	{
		
		cout<<"enter A :";
		cin>>obj.a;
		cout<<"enter B :";
		cin>>obj.b;
		
		
		cout<<"addition is :"<<obj.a+obj.b;
	}



main()
{
	A obj;
	fetch(obj);
}
