#inlcude<iostream>
using namespace std;

class  A{
	private:
		int a,b;
		friend class B;  // declare
};

class B{
	public:
		fetch(A&obj)
		
		cout<<"enter A :"<<endl;
		cin>>obj.a;
		cout<<"enter B :"<<endl;
		cin>>obj.b;
		
		cout<<"addition is :"<<obj.a+obj.b;
};


main()
{
	A obj();
	B obj1();
	obj1.fetch(obj);
	
}
