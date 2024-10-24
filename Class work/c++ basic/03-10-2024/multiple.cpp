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
class B
{
    public:
    	 mypractice1()
    	 {
    	 	cout<<"This is my practice1!!"<<endl;
		 }
};
class C:public B,public A
{
    public:
    	 mypractice2()
    	 {
    	 	cout<<"This is my practice2!!";
		 }
		 
};

main()
{
	C obj;
	obj.mypractice();
	obj.mypractice1();
	obj.mypractice2();
	
}
