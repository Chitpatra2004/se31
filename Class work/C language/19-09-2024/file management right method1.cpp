#include<stdio.h>
main()
{
	//2 variable adress store
	//2 varriable point out
	
	FILE*fptr;
	
	fptr=fopen("test1.txt","w");//open
	fprintf(fptr,"\n HEllo this is write method");
	fclose(fptr);
}
