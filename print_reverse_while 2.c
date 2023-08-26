#include <stdio.h>

int main (){
    int i, num;
    printf("Please enter a number = ");
    scanf("%d", &num);
    i = num;
    printf("The reverse number is = ");
    while (i > 0 /* condition */)
    {
       printf("%d ", i);
       i--; /* code */
    }
    return 0;
}