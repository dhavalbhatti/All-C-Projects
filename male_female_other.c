#include <stdio.h>

int main (){
    char c1;
    printf("Specify your gender: Please enter M for Male, F for Female & O for Others = ");
    scanf("%c",&c1);

    if ((c1 == 'M' || c1 == 'm'))
    {
    printf("You gender is Male");
    }
    else if ((c1 == 'F' || c1 == 'f'))
    {
    printf("You gender is Female");
    }
    else if ((c1 == 'O' || c1 == 'o')) 
    {
    printf("You gender is Others");
    }
    else {
    printf("You entered %c which is invalid gender. Please enter the correct gender. Try again.", c1);
    }
    return 0;
}