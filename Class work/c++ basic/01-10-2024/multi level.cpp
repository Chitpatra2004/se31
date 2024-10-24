#include<iostream>
using namespace std;
class A
{
	protected:
		int a,b;   //use of protected
    public:
    	 mypractice()
    	 {
    	 	cout<<"This is parents class"<<endl;
		 }
};
class B:public A
{
    public:
    	 mypractice1()
    	 {
    	 	cout<<"This is Child class"<<endl;
		 }
};
class C:public B
{
    public:
    	 mypractice2()
    	 {
    	 	cout<<"This is Child class 2";
		 }
		 mypractice3()
		 {
		 	cout<<"Enter A:";
		 	cin>>a<<endl;
		 	
		 	cout<<"A :"<<a;
		 }
};

main()
{
	C obj;
	obj.mypractice();
	obj.mypractice1();
	obj.mypractice2();
	obj.mypractice3();
}
