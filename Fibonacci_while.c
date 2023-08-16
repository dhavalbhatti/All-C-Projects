#include <stdio.h>

int main (){
    int num1, num2, num3, FS, i;
    num1 = 0;
    num2 = 1;
    printf("Please enter a number to find Fibonacci Sequence upto that number = ");
    scanf("%d", &num3);
    printf("Here is the Fibonacci Sequence upto %d = %d , %d ,", num3, num1, num2);
    i =1;
    while (i < num3 /* condition */)
    {
        FS=num1+num2; /* code */
        printf(" %d ," ,FS);
        num1=num2;
        num2=FS;
         /* code */
        i++;
    }
    return 0;
}