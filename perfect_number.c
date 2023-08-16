#include <stdio.h>

int main (){

    int i, sum, num;
    printf("Please enter a number = "); /* code */
    scanf("%d", &num);

    for (i = 1; i <= num/2; i++)
    {
        printf("%d \n", i); /* code */
    }
    return 0;
}