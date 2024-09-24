#include <stdio.h>

int main() 
{
    int n, result = 1; // Initialize result for multiplication

    printf("Enter Number: ");
    scanf("%d", &n);

    int i = 1;
    // Loop to multiply the values into the result
    while (i <= n)
	{
    result = result * i; // Perform multiplication
    i = i + 1;
    }

    printf("Product of numbers from 1 to %d is %d\n", n, result);

   
}
