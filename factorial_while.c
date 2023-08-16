#include <stdio.h>

int main (){
    int i, num, fact=1;
    printf("Please enter the number to find it's factorial = ");
    scanf("%d", &num);
    i = 1;
    printf("The factorial of %d! = ", num);
    while (i <= num /* condition */)
    {
        fact=fact*i;
        
       i++; /* code */
    }
    printf("%d ", fact);
    return 0;
}