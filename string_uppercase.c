#include <stdio.h>
#include <string.h>

int main()
{
    char str2[20];
    printf("Please enter your name: ");
    scanf("%s", &str2);
    printf("%s \n", strupr(str2));
    printf("%s \n", strlwr(str2));
    return 0;
    
}