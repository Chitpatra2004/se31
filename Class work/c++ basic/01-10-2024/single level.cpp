#include<iostream>
using namespace std;
class A
{
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
    	 	cout<<"This is Child class";
		 }
};


main()
{
	B obj;
	obj.mypractice();
	obj.mypractice1();
}
