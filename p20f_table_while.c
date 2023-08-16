#include <stdio.h>

int main (){
    int i, num;
    printf("Please enter the number to find sum of numbers = ");
    scanf("%d", &num);
    i = 1;
    printf("The Table of %d \n ", num);
    while (i <= 10 /* condition */)
    {
        printf("%d x %d = %d \n", num,i, num*i);
       i++; /* code */
    }
    return 0;
}