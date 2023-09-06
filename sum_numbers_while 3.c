#include <stdio.h>

int main (){
    int i, num, sum=0;
    printf("Please enter the number to find sum of numbers = ");
    scanf("%d", &num);
    i = 1;
    printf("Sum of first numbers ");
    while (i <= num /* condition */)
    {
        printf("%d ", i);
       sum = sum +i;
       i++; /* code */
    }
    printf("= %d ", sum);
    return 0;
}