#include <stdio.h>

int main (){
    int num1,num2,result;
    printf("Please enter Number1");
    scanf("%d",&num1);
    printf("Please enter Number2");
    scanf("%d",&num2);
    result=num1%num2;
    printf("Here is the result %d of modulo %d=%d", num1,num2,result);
    return 0;
}