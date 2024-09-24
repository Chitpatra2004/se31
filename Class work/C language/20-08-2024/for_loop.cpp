#include <stdio.h>

int main()
{
    int k = 10;

    // For loop to print numbers from 0 to 9
    for (int i = 0; i < k; i++)
	{
    printf("%d\n", i);
    }
    
    // Re-initialize i to 0 for subsequent loops
    int i = 0;
    
    // While loop to print "while" if conditions are met
    while (k > i && i <= 5) {
    printf("%s\n", "while");
    i++;  // Increment i to avoid an infinite loop
    }

    // Do-while loop to print "dowhile"
    do {
        printf("%s\n", "dowhile");
        i++;  // Increment i to avoid an infinite loop
    } while (i < 5);
    
    return 0;  // Return 0 to indicate successful execution
}
