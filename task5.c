#include <stdio.h>

int main()
{
    int i, arr[4][10];
    for (i = 0; i < 10; i++)
    {
        printf("Please enter number %d= ", i);
        scanf("%d", &arr[0][i]);
        arr[1][i] = arr[0][i];
        arr[2][i] = arr[0][i];
        arr[3][i] = arr[0][i];
    }
    printf("These are your entered values = ");
    printf("%d, ", arr[0][i]);
    
    printf("\n");

    return 0;
}