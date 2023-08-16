#include <stdio.h>

int main ()
{
    int n1;
    float n2;
    double n3;

    printf("Please enter an integer = ");
    scanf("%d", &n1);
    printf("Please enter a float = ");
    scanf("%f", &n2);
    printf("Please enter a double = ");
    scanf("%lf", &n3);
    printf("Sum of %d + %.2f + %lf = %lf \n", n1,n2,n3,n1+n2+n3);
    printf("Multiplication of %d x %.2f x %lf = %lf \n", n1,n2,n3,n1*n2*n3);
    printf("Substraction of %d - %.2f - %lf = %lf \n", n1,n2,n3,n1-n2-n3);
    printf("Division of %d / %.2f / %lf = %lf \n", n1,n2,n3,n1/n2/n3);
    
    return 0;
}