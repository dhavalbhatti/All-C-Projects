#include <stdio.h>

int main (){
    int num, result, sum=0, c, i=0, original;
    printf("Please enter a number = ");
    scanf("%d", &num);
    c=num;
    original=num;
        while (num > 0/* condition */)
            {
              num=num/10;
                 i++; /* code */
              }
    if (i == 3/* condition */)
         {
             while (c > 0 /* condition */)
                 {
                     result = c%10; /* For remainder/modulo/to check last number */
                    sum = sum+(result*result*result);
                    c=c/10; /* For reverse counting/sequence */
                }
            if (original==sum/* condition */)
                {
                    printf("It's an armstrong number = %d", sum); /* armstrong number = numbers x (cube/raise to 4/...) = sum = numbers itself */
                }
            else {
                    printf("It's NOT an armstrong number = %d", sum);
                } /* code */
        } else {
            if (i == 4/* condition */)
                {
                     while (c > 0 /* condition */)
                        {
                            result = c%10; /* For remainder/modulo/to check last number */
                            sum = sum+(result*result*result*result);
                            c=c/10; /* For reverse counting/sequence */
                        }
                    if (original==sum/* condition */)
                        {
                            printf("It's an armstrong number = %d", sum); /* armstrong number = numbers x (cube/raise to 4/...) = sum = numbers itself */
                        }
                    else {
                            printf("It's NOT an armstrong number = %d", sum);
                        }
                } else {
                            printf("It's NOT an armstrong number = %d", sum);
                        }
    }
    return 0;
}