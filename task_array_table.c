#include <stdio.h>

int main()
{
    int num, arr[100];
    printf("How may tables do you want to print? ");
    scanf("%d", &num);

    printf("Thanks. Now enter the values you want to print: =\n");
    for (int i = 0; i < num; i++)
    {
        printf("Please enter number %d= ", i+1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        printf("Tables \n");
        for (int j = 1; j < 11; j++)
        {
            printf("%d x %d= %d\n", arr[i], j, (arr[i] * j));
        }
        
    }

        return 0;
}