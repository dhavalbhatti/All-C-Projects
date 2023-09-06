#include <stdio.h>

int main (){
    int num1,num2,num3,usernum;
    
    printf("Please enter 3 digit number only= ");
    scanf("%d",&usernum);
    num3=usernum%10;
    usernum=usernum/10;
    num2=usernum%10;
    usernum=usernum/10;
    num1=usernum%10;

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("Number1 is Maximum");
        }
         else {
            printf("Number3 is Maximum");
    }
    }
     if (num2 > num3)
    {
    printf("Number2 is Maximum");
    }
    else {
    printf("Number3 is Maximum");
    }
    return 0;
}