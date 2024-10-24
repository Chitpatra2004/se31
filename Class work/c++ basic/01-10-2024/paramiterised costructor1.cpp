#include<iostream>
using namespace std;

class A{
	public:
		A(int a,int b)// parametrised 
		{
			cout<<"A :"<<a<<endl;
			cout<<"B :"<<b;
		}
};

main()
{
	A myclass(10,20);//create the object
}
