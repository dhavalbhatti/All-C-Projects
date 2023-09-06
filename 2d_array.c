#include <stdio.h>

int main()
{
    int row, col, arr[3][3], arr2[3][3];
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            printf("Enter the values for Matrix 1 [%d][%d] ", row, col);
            scanf("%d", &arr[row][col]);
            printf("Enter the values for Matrix 2 [%d][%d] ", row, col);
            scanf("%d", &arr2[row][col]);
        }
    }
    printf("Values for Matrix 1 are \n");
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            printf("%d ", arr[row][col]);
        }
        printf("\n");
    }
    printf("Values for Matrix 2 are \n");

    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            printf("%d ", arr2[row][col]);
        }
        printf("\n");
    }

    return 0;
}