#include<iostream>
using namespace std;
class A
{
	
    protected:
    	string i;
    	 	int j;
    	 	public:
    	marks()
    	 {
    	 	cout<<"Enter Your Name :";
    	 	cin>>i;
    	 	cout<<endl<<"Enter Your Roll number  :";
    	 	cin>>j;
    	 	
		 }
};
class B:public A
{
    protected:
    	int a,b,c;
    	public:
    	marks1()
    	 {
    	 
    	 cout<<endl<<"Enter Your Mathmatics mark : ";
    	 cin>>a;
    	 cout<<endl<<"Enter Your Science mark : ";
    	 cin>>b;
    	 cout<<endl<<"Enter Your English mark : ";
    	 cin>>c;
    	 
		 }
};
class C:public B
{
    protected:
    	int total;
		 float percentage;
		 public:
    	 marks2()
    	 {
		 total=a+b+c;
		percentage=total/3;
		 cout<<"total mark of student:"<<total;
		 cout<<endl<<"total percentage of student :"<<percentage;
		 	
		 }
		
};

main()
{
	C obj;
	obj.marks();
	obj.marks1();
	obj.marks2();
}
