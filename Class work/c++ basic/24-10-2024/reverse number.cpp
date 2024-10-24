#include<iostream>
using namespace std;
main()
{
	int n,rem,rev=0;

	cout<<"Enter Number :";
	cin>>n;
	while(n!=0)
	//759
    {
	rem=n%10;//  
	rev=rev*10+rem;
	n=n/10;
	}
	cout<<"reverse number:"<<rev;
}
