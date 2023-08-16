#include <stdio.h>

int main (){
    int num;
    printf("Please enter a number to get even numbers = ");
    scanf("%d", &num);
    printf("Here is the list of even numbers upto %d \n", num); /* code */
    for (int i = 0; i <= num;)
    {
        printf("%d ", i); /* code */
        i = i+2;
    }
    return 0;
}