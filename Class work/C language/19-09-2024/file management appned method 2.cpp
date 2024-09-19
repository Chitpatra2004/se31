#include<stdio.h>
main()
{
	//2 variable adress store
	//2 varriable point out
	
	FILE*fptr;
	
	fptr=fopen("test1.txt","a");//open
	fprintf(fptr,"\n HEllo this is appned method");
	fclose(fptr);
}
