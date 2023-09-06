#include <stdio.h>

int main()
{
    int row, col, num = 5;
    for (row = 1; row <= num; row++)
    {

        for (col = num; (col >= 1); col--)
        {
            if (row >= col)
            {
                printf("* ");
            }
            else
                printf(" ");
        }

        printf("\n");
    }
    return 0;
}