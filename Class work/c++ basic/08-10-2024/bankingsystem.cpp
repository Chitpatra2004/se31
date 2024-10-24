#include<iostream>
using namespace std;

class Myclass{
	public:
		string name;
		int ac_no,bal=5000,de,we;
		regi()
		{
			cout<<"Enter name: "<<endl;
			cin>>name;
			cout<<"Enter account number :"<<endl;
			cin>>ac_no;
			
			cout<<"your balance is :"<<bal<<endl;
		}
		deposit()
		{
			cout<<"Enter diposit amount  :"<<endl;
			cin>>de;
			cout<<"your deposit amount is :"<<de<<endl;
			bal=bal+de;
		}
		withdraw()
		{
			cout<<"enter withdraw amount :"<<endl;
			cin>>we;
			
			cout<<"enter withdraw amount is:"<<we<<endl;
			if(we>bal)
			{
				cout<<"insufficiant balance"<<we-bal<<endl;
			}
			else
			{
				bal=bal-we;
			}
			
			
		}
		check()
			{
				cout<<"your account balance is :"<<bal<<endl;
			}
};

main()
{
	Myclass obj;
	
	cout<<"press 1 for register "<<endl;
	cout<<"press 2 for exit "<<endl;
	
	int ch;
	cout<<"enter your choice"<<endl;
	cin>>ch;
	if(ch==1)
	{
		obj.regi();
		while(1)
		{
			cout<<"press 1 for deposit"<<endl;
			cout<<"press 2 for withdraw"<<endl;
			cout<<"press 3 for check balance"<<endl;
			cout<<"press 4 for exit"<<endl;
			
			int ch1;
			cout<<"enter your choice"<<endl;
			cin>>ch1;
			
			if(ch1==1)
			{
			  obj.deposit();	
			}
			else if(ch1==2)
			{
				obj.withdraw();
			}
			else if(ch1==3)
			{
				obj.check();
			}
			else if(ch1==4)
			{
				cout<<"invalid choice!!"<<endl;
				break;
			}
		}
		
	}
	else
	{
		cout<<"thank you!!";
	}
}

