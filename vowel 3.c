#include <stdio.h>

int main (){
    char c1;
    printf("Please enter an Alphabet: ");
    scanf("%c",&c1);

    if ((c1 == 'A') || (c1 == 'E') || (c1 == 'I') || (c1 == 'O') || (c1 == 'U') || (c1 == 'a') || (c1 == 'e') || (c1 == 'i') || (c1 == 'o') || (c1 == 'u'))
    {
    printf("It's a Vowel");
    }
    else {
    printf("It's a Consonant");
    }
    return 0;
}