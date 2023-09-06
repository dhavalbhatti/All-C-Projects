#include <stdio.h>
/* palindrome = 121 = reverse 121. condition */

int main (){
    int num, remeinder, original, sum=0;
    printf("Please enter a number = ");
    scanf("%d", &num);
    original = num;
    while (num > 0 /* condition */)
    {
       remeinder = num%10; /* For remainder/modulo/to check last number */
       sum=remeinder + (sum*10); /* code */
       num=num/10; /* For reverse counting/sequence */
    }
    if (sum == original/* condition */)
    {
        printf("The entered number %d is a palindrome number", sum); /* code */
    } else {
        printf("The entered number %d is NOT a palindrome number", sum);
    }
    
    return 0;
}