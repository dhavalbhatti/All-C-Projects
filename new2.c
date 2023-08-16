#include <stdio.h>

int main (){
    int num;
    printf("Please enter your age = ");
    scanf("%d", &num); /* & is for address */
    printf("Your age is = %d", num);
    
    return 0;
}