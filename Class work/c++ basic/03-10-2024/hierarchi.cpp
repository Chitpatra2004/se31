#include<iostream>
using namespace std;
class A
{
	
    public:
    	 mypractice()
    	 {
    	 	cout<<"This is my practice!!"<<endl;
		 }
};
class B:public A
{
    public:
    	 mypractice1()
    	 {
    	 	cout<<"This is my practice1!!"<<endl;
		 }
};
class C:public A
{
    public:
    	 mypractice2()
    	 {
    	 	cout<<"This is my practice2!!";
		 }
		 
};

main()
{
   B obj1;
   obj1.mypractice();
   obj1.mypractice1();
   C obj;
   obj.mypractice();
   obj.mypractice2();
	
}
