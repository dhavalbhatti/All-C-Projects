#include <stdio.h>

int main (){
    int i, num;
    printf("Please enter the number = ");
    scanf("%d", &num);
    i = 0;
    printf("The %d number has = ", num);
    while (num > 0 /* condition */)
    {
        num = num/10;
       i++; /* code */
    }
    printf("%d digits", i);
    return 0;
}