#include <stdio.h>

int main (){

    for (int row = 1; row < 6; row++)
    {
        for (int col = 1; col < 6; col++)
        {
            printf("*"); 
        }
        printf("\n"); 
    }
    return 0;
}