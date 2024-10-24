#include<iostream>
using namespace std;
class Myclass{
         public:
         	int a,b;
         	add()//method
         	{
         	   cout<<"A :";
         	   cin>>a;
         	   cout<<"B :";
         	   cin>>b;
         	   
         	   cout<<"Addition :"<<a+b;
			}
			sub()//method
         	{
         	   cout<<"A :";
         	   cin>>a;
         	   cout<<"B :";
         	   cin>>b;
         	   
         	   cout<<"Substraction :"<<a-b;
			}
			multi()//method
         	{
         	   cout<<"A :";
         	   cin>>a;
         	   cout<<"B :";
         	   cin>>b;
         	   
         	   cout<<"Multiplication :"<<a*b;
			}
			
			
};
main()
{
	Myclass obj;
	obj.add();
	obj.sub();
	obj.multi();
	
}
