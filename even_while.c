#include <stdio.h>

int main (){
    int i, num;
    printf("Please enter the number to find Even numbers series = ");
    scanf("%d", &num);
    i = 0;
    printf("Odd Numbers till %d = ", num);
    while (i <= num /* condition */)
    {
       printf("%d ", i);
       i = i+2; /* code */
    }
    return 0;
}