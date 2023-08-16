#include <stdio.h>

int main (){
    int n1;
    printf("Please enter the weekday (1 to 7) = ");
    scanf("%d",&n1);
    switch (n1)
    {
    case 1 /* constant-expression */:
        printf("%d is a Monday", n1); /* code */
        break;

    case 2 /* constant-expression */:
        printf("%d is a Tuesday", n1); /* code */
        break;

    case 3 /* constant-expression */:
        printf("%d is a Wednesday", n1); /* code */
        break;

    case 4 /* constant-expression */:
        printf("%d is a Tursday", n1); /* code */
        break;

    case 5 /* constant-expression */:
        printf("%d is a Friday", n1); /* code */
        break;

    case 6 /* constant-expression */:
        printf("%d is a Saturday", n1); /* code */
        break;

    case 7 /* constant-expression */:
        printf("%d is a Sunday", n1); /* code */
        break;
    
    default:
    printf("Invalid entry! PLease enter between 1 to 7 only.");
        break;
    }
    
    return 0;
}

/*
switch(expression){
    case 1:
    statement;
    break;
    default:
    statement;
    break;
}
*/