#include <stdio.h>

int main (){
    int n1;
    printf("Please enter the month (1 to 12) = ");
    scanf("%d",&n1);

    if ((n1 == 1) || (n1 == 3) || (n1 == 5) || (n1 == 7) || (n1 == 8) || (n1 == 10) || (n1 == 12))
    {
    printf("%d st/rd/th month contains 31 Days.", n1);
    }
    else if ((n1 == 4) || (n1 == 6) || (n1 == 9) || (n1 == 11))
    {
    printf("%dth month contains 30 Days.", n1);
    }
    else if ((n1 == 2))
    {
    printf("%dnd month contains 28/29 Days.", n1);
    }
    else
    {
    printf("Invalid entry! PLease enter between 1 to 12 only.");
    }
    return 0;
}