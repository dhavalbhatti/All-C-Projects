#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20], str2[20];
    printf("Please enter a string1: ");
    scanf("%s", &str1);
    printf("Please enter a string2: ");
    scanf("%s", &str2);
    printf("Original %s \n", str1);
    printf("Original %s \n", str2);
    if (strcmp(str1, str2) == 0)
    {
        printf("The strings are equal \n");
    }
    else if (strcmp(str1, str2) < 0)
    {
        printf("String1 is greater than string2 \n");
    }
    else
    {
        printf("String2 is greater than string1 \n");
    }
    return 0;
}