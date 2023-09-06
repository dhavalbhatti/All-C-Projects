#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20];
    printf("Please enter a string: ");
    scanf("%s", &str1);
    printf("Original %s \n", str1);
    printf("Length %d \n", strlen(str1));
    return 0;
}