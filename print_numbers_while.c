#include <stdio.h>

int main (){
    int i, num;
    printf("Please enter a number = ");
    scanf("%d", &num);
    i = 1;
    printf("Series = ");
    while (i <= num /* condition */)
    {
       printf("%d ", i);
       i++; /* code */
    }
    return 0;
}