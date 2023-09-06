#include <stdio.h>

int main (){

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 5; col >= 1; col--)
        {
            if (col == row)
            {
                printf("$");
            } else
            {
                printf("*");
            }
            
        }
        printf("\n");
    }
    return 0;
}