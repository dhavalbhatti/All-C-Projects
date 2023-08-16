#include <stdio.h>

int main (){
    char c1;
    printf("Please enter an Alphabet: ");
    scanf("%c",&c1);

    if ((c1 >= 'A' && c1 <= 'Z') || (c1 >= 'a' && c1 <= 'z'))
    {
    printf("%c It's a Character", c1);
    }
    else {
    printf("%c It's NOT a Character", c1);
    }
    return 0;
}