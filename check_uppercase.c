#include <stdio.h>

int main (){
    char c1;
    printf("Please enter an Alphabet: ");
    scanf("%c",&c1);

    if ((c1 >= 'A' && c1 <= 'Z'))
    {
    printf("%c is a Uppercase Character", c1);
    }
    else if ((c1 >= 'a' && c1 <= 'z'))
    {
    printf("%c is a Lowercase Character", c1);
    }
    else {
    printf("%c is NOT a Character", c1);
    }
    return 0;
}