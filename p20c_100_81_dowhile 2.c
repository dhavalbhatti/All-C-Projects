#include <stdio.h>

int main (){
    int i;
    i = 100;
    do
    {
        printf("%d \n", i);
        i--; /* code */
    } while (i >= 81 && i <= 100 /* condition */);
    
    return 0;
}