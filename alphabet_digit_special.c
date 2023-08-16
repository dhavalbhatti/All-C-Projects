#include <stdio.h>

int main (){
    char c1;
    printf("Please enter any Character = ");
    scanf("%c",&c1);

    if ((c1 >= 'A' && c1 <= 'Z') || (c1 >= 'a' && c1 <= 'z'))
    {
    printf("%c is an Alphabet.", c1);
    }
    else if ((c1 >= '0' && c1 <= '9'))
    {
    printf("%c is a Number.", c1);
    }
    else {
    printf("%c is a special character.", c1);
    }
    return 0;
}