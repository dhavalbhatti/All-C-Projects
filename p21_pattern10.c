#include <stdio.h>

int main()
{
    int row, col;
    for (row = 1; row <= 5; row++)
    {

        for (col = 0; col < row; col++)
        {

            printf("%d ", (row + col) % 2);
        }

        printf("\n");
    }
    return 0;
}