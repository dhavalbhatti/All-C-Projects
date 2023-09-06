#include <stdio.h>

int main()
{
    int i, arr[10];
    for (i = 0; i < 10; i++)
    {
        printf("Please enter number %d= ", i);
        scanf("%d", &arr[i]);
    }
    printf("These are your entered values = ");
    for (i = 0; i < 10; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
    printf("Divisable by 2 values = ");
    for (i = 0; i < 10; i++)
    {

        if ((arr[i] % 2 == 0))
        {
            printf("%d, ", arr[i]);
        }
    }
    printf("\n");
    printf("Divisable by 5 values = ");
    for (i = 0; i < 10; i++)
    {

        if ((arr[i] % 5 == 0))
        {
            printf("%d, ", arr[i]);
        }
    }
    printf("\n");
    printf("Divisable by 10 values = ");
    for (i = 0; i < 10; i++)
    {

        if ((arr[i] % 10 == 0))
        {
            printf("%d, ", arr[i]);
        }
    }

    return 0;
}