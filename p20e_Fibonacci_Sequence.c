#include <stdio.h>

int main (){
    int num1, num2, num3, FS;
    num1 = 0;
    num2 = 1;
    printf("Please enter a number to find Fibonacci Sequence upto that number = ");
    scanf("%d", &num3);
    printf("Here is the Fibonacci Sequence upto %d = %d , %d ,", num3, num1, num2);
    for (int i = 3; i <= num3; i++)
    {
        FS=num1+num2; /* code */
        num1=num2;
        num2=FS;
        printf(" %d ," ,FS);
    }
    return 0;
}