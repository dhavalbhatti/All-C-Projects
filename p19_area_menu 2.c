#include <stdio.h>

int main (){
    float n1, n2, result;
    int s1;
    printf("Welcome to the Area Finding Program.\n");
    printf("1. Area of Triangle \n");
    printf("2. Area of Rectangle \n");
    printf("3. Area of Circle \n");
    printf("Please select from (1-3) to start a program = ");
    scanf("%d",&s1);
    if (s1 == 1)
    {
        printf("Please enter Height = ");
        scanf("%f",&n1);
        printf("Please enter Base = ");
        scanf("%f",&n2); /* code */
        result = ((n1*n2)/2);
        printf("Area of Triangle is = %f", result);
    }

    else if (s1 == 2)
    {
        printf("Please enter Length = ");
        scanf("%f",&n1);
        printf("Please enter Width = ");
        scanf("%f",&n2); /* code */
        result = ((n1*n2));
        printf("Area of Rectangle is = %f", result);
    }

    else if (s1 == 3)
    {
        printf("Please enter the redius of a circle = ");
        scanf("%f",&n1);
        result = ((n1*n1)*3.14);
        printf("Area of Rectangle is = %f", result);
    }
    
    else {
        printf("Invalid entry! PLease enter between 1 to 3 only.");
    }
    
    return 0;
}