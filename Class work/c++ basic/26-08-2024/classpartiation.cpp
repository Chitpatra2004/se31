#include<iostream>
using namespace std;
class Myclass1{
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
		};
class Myclass2{
		public:
		     	int a,b;
			sub()//method
         	{
         	   cout<<"A :";
         	   cin>>a;
         	   cout<<"B :";
         	   cin>>b;
         	   
         	   cout<<"Substraction :"<<a-b;
			}
		};
class Myclass3{
		 public:
         	int a,b;
         	multi()//method
         	{
         	   cout<<"A :";
         	   cin>>a;
         	   cout<<"B :";
         	   cin>>b;
         	   
         	   cout<<"Multiplication :"<<a+b;
			} 
        };
main()
{
	Myclass1 obj1;
	obj1.add();
	Myclass2 obj2;
	obj2.sub();
	Myclass3 obj3;
	obj3.multi();
	
}
