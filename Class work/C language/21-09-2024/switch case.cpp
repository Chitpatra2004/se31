#include<stdio.h>
main()
{
	char a;
	printf("enter charecter :");
	scanf("%c",&a);
	
	switch(a)
	{
		case'A':
		printf("%c is vowel",a);
		break;
		case'E':
		printf("%c is vowel",a);
		break;
	    case'I':
		printf("%c is vowel",a);
		break;
		case'O':
		printf("%c is vowel",a);
		break;
		case'U':
		printf("%c is vowel",a);
	    break;
	  default:
		printf("%c is consonant",a);
		break;
	}
}
