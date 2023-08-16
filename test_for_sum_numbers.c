#include <stdio.h>

int main (){
    int sum =0, num;
    printf("Please enter a number = ");
    scanf("%d", &num);
    printf("Sum of first %d numbers = ", num);
    for (int i = 0; i <= num; i++)
    {
        printf("%d ", i); /* code */
        sum=sum+i;
    }
    printf(" = %d", sum);
    return 0;
}

/*
for(inilization; condition; increament){
    Body loop
}
*/