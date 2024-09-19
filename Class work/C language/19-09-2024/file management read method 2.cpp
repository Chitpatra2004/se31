#include<stdio.h>
main()
{
	//2 variable adress store
	//2 varriable point out
	
	FILE*fptr;
	
	fptr=fopen("test1.txt","r");//open
	char a[100];
   while(fgets(a,100,fptr)!=NULL)
	
	{
		printf("%s",a);
	}

	fclose(fptr);
}
