#include<iostream>
using namespace std;

class A
{
	public:
	A(int n)
	{	
   int n1=0,n2=1,i;

		
	for(i=3;i<=n;i++)
	{
		int n3=n1+n2;
		printf("%d\n",n3);
		
		n1=n2;
		n2=n3;
	
    }  
}
};

main()
{
	 int n;
	 cout<<"Enter term :"<<endl;
	 cin>>n;
	A myclass(n);//create the object   /// my class is object 
}

