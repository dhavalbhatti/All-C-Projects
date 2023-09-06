#include <stdio.h>

int main (){

    int evensum=0, oddsum=0, num, even=0, odd=0;
    
    for (int i = 1; i <= 10; i++)
    {
        printf("Please enter number %d  (each at a time) = ", i);
        scanf("%d", &num);

        if (num%2==0)
        {
           evensum=evensum+num;
           even++;
        } else {
           oddsum=oddsum+num;
           odd++;
        }
        
    }
    printf("Total even numbers = %d \n", even);
    printf("Total odd numbers = %d \n", odd);
    printf("Sum of even numbers = %d \n", evensum);
    printf("Sum of odd numbers = %d", oddsum);

    return 0;
}