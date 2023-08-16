#include <stdio.h>

int main (){
    int num1;
    printf("Please enter a number: ");
    scanf("%d",&num1);

    if (num1%2 == 0)
    {
    printf("The Entered Number %d is a Even Number" ,num1);
    }
    else
    {
    printf("The Entered Number %d is an Odd Number" ,num1);
    }
    return 0;
}

/*

else if ladder
if(){

}else if(){

}else

nested if - condition within condition
if(){
    if(){

    }else
}else

*/