#include <stdio.h>
#define SIZE 10

void fill_spiral(int matrix[SIZE][SIZE])
{
    int left = 0, right = SIZE - 1, top = 0, bottom = SIZE - 1;
    int num = 1;

    while (num <= SIZE * SIZE)
	{
        // Fill the top row
        for (int i = left; i <= right; i++) 
		{
            matrix[top][i] = num++;
        }
        top++;

        // Fill the right column
        for (int i = top; i <= bottom; i++) 
		{
            matrix[i][right] = num++;
        }
        right--;

        // Fill the bottom row
        if (top <= bottom) 
		{
            for (int i = right; i >= left; i--)
			{
                matrix[bottom][i] = num++;
            }
            bottom--;
        }

        // Fill the left column
        if (left <= right) 
		{
            for (int i = bottom; i >= top; i--) 
			{
                matrix[i][left] = num++;
            }
            left++;
        }
    }
}

void print_matrix(int matrix[SIZE][SIZE]) 
{
    for (int i = 0; i < SIZE; i++) 
	{
        for (int j = 0; j < SIZE; j++) 
		{
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix[SIZE][SIZE] = {0};

    fill_spiral(matrix);
    print_matrix(matrix);

    return 0;
}

