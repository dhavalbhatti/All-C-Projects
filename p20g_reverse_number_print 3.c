#include <stdio.h>

int main (){
    int num, result;
    printf("Please enter a number = ");
    scanf("%d", &num);
    while (num > 0 /* condition */)
    {
       result = num%10; /* For remainder/modulo/to check last number */
       printf("%d ", result); /* code */
       num=num/10; /* For reverse counting/sequence */
    }
    
    return 0;
}