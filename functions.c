/*
datatypes Function_name (){
    body code..
}

Call by Function_name();

1 with arguments with return types
2 without arguments without return types
3 with arguments without return types
4 without arguments with return types

*/

#include <stdio.h>

// void abc()
// {
//     printf("Without without function \n");
// }

// void sum()
// {
//     int a, b; // Without without function
//     printf("Number1 = ");
//     scanf("%d", &a);
//     printf("Number2 = ");
//     scanf("%d", &b);
//     printf("Sum of 2 numbers = %d \n", a + b);
// }

int main()
{
    int c, d;
    printf("Number1 = ");
    scanf("%d", &c);
    printf("Number2 = ");
    scanf("%d", &d);
    // sum();
    // abc(); /* function call */
    funt_two(c, d);
    
    return 0;
}

void funt_two(int c, int d) 
{

    printf("Sum of 2 numbers = %d \n", c + d);
}