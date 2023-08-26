#include <stdio.h>

int main (){

    int evensum=0, oddsum=0, num;
    
    for (int i = 1; i <= 10; i++)
    {
        printf("Please enter number %d  (each at a time) = ", i);
        scanf("%d", &num);

        if (num%2==0)
        {
           evensum=evensum+num;
           printf("%d is an even number\n", num);
        } else {
           oddsum=oddsum+num;
           printf("%d is an odd number\n", num);
        }
        
    }

    printf("Sum of even numbers = %d \n", evensum);
    printf("Sum of odd numbers = %d", oddsum);

    return 0;
}