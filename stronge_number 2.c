#include <stdio.h>
/* Strong number is a special number whose sum of the factorial of digits is equal to the original number. For Example: 145 is strong number. Since, 1! + 4! + 5! */
int main (){
    int num, original, lastnumber, sum=0;
    long fact;
    printf("Please enter a number to find Strong Number = ");
    scanf("%d", &num);
    original=num;
    while (num>0)
    {
        lastnumber = num%10; /* code */
        fact = 1;
    for (int i = 1; i <= lastnumber; i++)
    {
         /* For remainder/modulo/to check last number */
        fact=fact*i; /* code */
        
    }
    sum = sum + fact;
    num=num/10; /* For reverse counting/sequence */
    }
    if (sum == original/* condition */)
    {
       printf("The entered number %d is a stronge number", original); /* code */
    }
    else {
        printf("The entered number %d is NOT a stronge number", original); /* code */
    }

    return 0;
}