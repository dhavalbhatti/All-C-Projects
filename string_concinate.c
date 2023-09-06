#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = {"Hello "}, str2[20];

    printf("Please enter your name: ");
    scanf("%s", &str2);
    printf("%s \n", strcat(str1, str2));
    return 0;
}