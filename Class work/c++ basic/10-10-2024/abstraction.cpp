#include<iostream>
using namespace std;


class Employer{
	//abstract clas 
	virtual salary()=0;
};
class Shlok:public Employer{
	public:
		salary()
		{
			cout<<"Salary of shlok is 25k"<<endl;
		}
};
class Himanshu:public Employer{
	public:
		salary()
		{
			cout<<"salary of himanshu is 30k"<<endl;
		}
};
class Daksh:public Employer{
	public:
		salary()
		{
			cout<<"daksh got 50k"<<endl;
		}
};

main()
{
	Shlok obj1;
	obj1.salary();
    Himanshu obj2;
    obj2.salary();
    Daksh obj3;
    obj3.salary();
	
}
