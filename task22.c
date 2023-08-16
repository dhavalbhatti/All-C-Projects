#include <stdio.h>

int main (){

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
            if (col == 5 && row ==1)
            {
                printf("$");
                continue;
            } if (col == 4 && row ==2)
            {
                printf("$");
                continue;
            } if (col == 3 && row ==3)
            {
                printf("$");
                continue;
            } if (col == 2 && row ==4)
            {
                printf("$");
                continue;
            }if (col == 1 && row ==5)
            {
                printf("$");
                continue;
            } else
            {
                printf("*");
            }
            
        }
        printf("\n");
    }
    return 0;
}