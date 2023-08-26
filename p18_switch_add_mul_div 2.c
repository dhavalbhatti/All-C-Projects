#include <stdio.h>

int main (){
    float n1, n2;
    int s1;
    printf("Welcome to Switch Based Program.\n");
    printf("1. Addition \n");
    printf("2. Substraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    printf("Please select from (1-4) to start a program = ");
    scanf("%d",&s1);
    printf("Please enter Number1 = ");
    scanf("%f",&n1);
    printf("Please enter Number2 = ");
    scanf("%f",&n2);
    switch (s1)
    {
    case 1 /* Addition */:
        printf("Addition of %f+%f = %f", n1,n2, n1+n2); /* code */
        break;

    case 2 /* Substraction */:
        printf("Substraction of %f-%f = %f", n1,n2, n1-n2); /* code */
        break;

    case 3 /* Multiplication */:
        printf("Multiplication of %fx%f = %f", n1,n2, n1*n2); /* code */
        break;

    case 4 /* Division */:
        printf("Division of %f/%f = %f", n1,n2, n1/n2); /* code */
        break;
    
    default:
    printf("Invalid entry! PLease enter between 1 to 4 only.");
        break;
    }
    
    return 0;
}