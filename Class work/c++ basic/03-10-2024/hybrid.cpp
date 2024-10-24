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
class C
{
    public:
    	 mypractice2()
    	 {
    	 	cout<<"This is my practice2!!"<<endl;
		 }
		 
};
class D:public B,public C
{
    public:
    	 mypractice3()
    	 {
    	 	cout<<"This is my practice3!!";
		 }
		 
};
main()
{
   D obj;
   obj.mypractice();
   obj.mypractice1();
   obj.mypractice2();
   obj.mypractice3();
   
}
