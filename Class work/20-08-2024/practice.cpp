#include <stdio.h>

int main()
 {
    int n, result = 0; // Initialize result for subtraction

    printf("Enter Number: ");
    scanf("%d", &n);

    int i = 1;
    // Loop to subtract the values from the result
    while (i <= n) {
        result = result - i; // Perform subtraction
        i = i + 1;
    }

    printf("%d\n", result);

    return 0;
}
