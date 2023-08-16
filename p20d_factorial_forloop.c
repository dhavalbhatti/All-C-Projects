#include <stdio.h>

int main (){
    int num, fact;
    fact = 1;
    printf("Please enter a number to find it's Factorial = ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        fact=fact*i; /* code */
    }
    printf("He is the Factorial of %d! = %d", num, fact);
    return 0;
}