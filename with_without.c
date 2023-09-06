#include <stdio.h>

void fun(int c, int d)
{
    printf("Sum of 2 numbers = %d \n", c + d);
}

int main()
{
    int c, d, e;

    do
    {
        printf("Number1 = ");
        scanf("%d", &c);
        printf("Number2 = ");
        scanf("%d", &d);
        fun(c, d);
        printf("Do you wish to continue with another sum? (0 for NO, 1 for YES) = ");
        scanf("%d", &e);
    } while (e == 1);

    return 0;
}