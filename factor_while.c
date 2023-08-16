#include <stdio.h>
int main(){
    int num, i=1;
    printf("Please enter a number = ");
    scanf("%d", &num);
    printf("Factors of %d = ", num);
    while (i<=num /* condition */)
    {
        if (num%i == 0/* condition */)
        {
                printf("%d ", i); /* code */
        }
        i++;
    }
    return 0;
}