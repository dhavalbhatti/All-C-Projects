#include <stdio.h>

int main (){
    int i, num;
    i = 1;
    printf("Please enter a number = ");
    scanf("%d", &num);
    printf("Table of %d\n", num);
    while (i <= 10 /* condition */)
    {
       printf("%d x %d = %d \n", num,i, num*i);
       i++; /* code */
    }
    return 0;
}