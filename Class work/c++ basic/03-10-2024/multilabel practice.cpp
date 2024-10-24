#include<iostream>
using namespace std;
class A
{
	
    public:
    	 marks()
    	 {
    	 	string i;
    	 	int j;
    	 	
    	 	cout<<"Enter Your Name :";
    	 	cin>>i;
    	 	cout<<endl<<"Enter Your Roll number  :";
    	 	cin>>j;
    	 	
		 }
};
class B:public A
{
    public:
    	int a,b,c;
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
    public:
    	 marks2()
    	 {
    	 int total;
		 float percentage;
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
