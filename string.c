#include <stdio.h>
#include <string.h>

int main()
{
    char str[20], str2[20];
    printf("Please enter a string: ");
    scanf("%s", &str);
    strcpy(str2, str);
    printf("Original %s \n", str);
    printf("Copied %s \n", str2);
}