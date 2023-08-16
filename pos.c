#include <stdio.h>

int main ()
{
    int num;
    printf("Please enter a nember = ");
    scanf("%d", &num);
    (num > 0)?printf("%d is Positive \n", num):((num == 0)?printf("%d is Zero \n", num):printf("%d is Negative \n", num));
    return 0;

}

/*
special oprators

* - pointer 
, - to separate 
& - address 
sizeof(variable/data type)

usage to check data size.
printf("%d", sizeof(char));

*/