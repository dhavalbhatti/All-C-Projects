#include <stdio.h>
int main() {
    int n;
    printf("Please enter a number between 1-7 =");
    scanf("%d", &n);
    switch (n)
    {
    case 1/* constant-expression */:
        printf("It's a Monday");/* code */
        break;
    
    case 2/* constant-expression */:
        printf("It's a Tuesday");/* code */
        break;

    case 3/* constant-expression */:
        printf("It's a Wednesday");/* code */
        break;
    
    case 4/* constant-expression */:
        printf("It's a Thursday");/* code */
        break;
        
    case 5/* constant-expression */:
        printf("It's a Friday");/* code */
        break;

    case 6/* constant-expression */:
        printf("It's a Saturday");/* code */
        break;
    
    case 7/* constant-expression */:
        printf("It's a Sunday");/* code */
        break;
    
    default:
    printf("Error! Please enter a number between 1-7 only");
        break;
    }
    return 0;
}