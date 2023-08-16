#include <stdio.h>

int main (){
    int num, lastdigit, firstdigit, original;
    printf("Please enter a number (10 onwards) = ");
    scanf("%d", &num);
    original = num;
    lastdigit = num%10; /* For remainder/modulo/to check last number */
    while (original > 0 /* condition */)
    {
        firstdigit=original%10;
       original=original/10; /* For reverse counting/sequence */
    }
    printf("The sum of first & last digit is = %d ", firstdigit+lastdigit); /* code */
    return 0;
}