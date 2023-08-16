#include <stdio.h>

int main ()
{
    char name[20];

    printf("Please enter your name (20 char max) = ");
    scanf("%s", &name);
    printf("%s ", name);
    printf("\t \t \t \t \t %s \n", name);
    printf("\t \t %s \n", name);
    printf("%s ", name);
    printf("\t \t \t \t \t %s \n", name);
    return 0;
}