#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
		cout<<"welcome to our website!!"<<endl;
    	}
    	fac()
    	{
    		int a,j,fact=1;
    		cout<<"Enter number :";
    		cin>>j;
    		
    		for(a=1;a<=j;a++)
    		{
    			fact*=a;
			}
			cout<<fact<<endl;
		}
		~A()//destroctor(symbol-~)
		{
			cout<<"thank you!!"<<endl;
		}
};
main()
{
	  A obj;
	  obj.fac();
}
