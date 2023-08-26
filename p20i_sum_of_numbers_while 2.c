#include <stdio.h>

int main (){
    int num, result, sum=0;
    printf("Please enter a number = ");
    scanf("%d", &num);
    while (num > 0 /* condition */)
    {
       result = num%10; /* For remainder/modulo/to check last number */
       sum = sum+result;
       num=num/10; /* For reverse counting/sequence */
    }
    printf("The sum of numbers = %d", sum);
    return 0;
}