#include <stdio.h>

int main (){
    char c1;
    printf("Please enter an Alphabet = ");
    scanf("%c",&c1);
    switch (c1)
    {
    case 'a' /* constant-expression */:
        printf("It's a Vowel"); /* code */
        break;
    
    case 'A' /* constant-expression */:
        printf("It's a Vowel"); /* code */
        break;

    case 'e' /* constant-expression */:
        printf("It's a Vowel"); /* code */
        break;
    
    case 'E' /* constant-expression */:
        printf("It's a Vowel"); /* code */
        break;
    
    case 'i' /* constant-expression */:
        printf("It's a Vowel"); /* code */
        break;
    
    case 'I' /* constant-expression */:
        printf("It's a Vowel"); /* code */
        break;

    case 'o' /* constant-expression */:
        printf("It's a Vowel"); /* code */
        break;
    
    case 'O' /* constant-expression */:
        printf("It's a Vowel"); /* code */
        break;

    case 'u' /* constant-expression */:
        printf("It's a Vowel"); /* code */
        break;
    
    case 'U' /* constant-expression */:
        printf("It's a Vowel"); /* code */
        break;
    
    default:
        printf("It's a Consonant/digit/special character."); /* code */
        break;
    
    }
    return 0;
}