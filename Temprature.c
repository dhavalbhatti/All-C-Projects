#include <stdio.h>

int main (){
    float n1;
    printf("Please enter temprature in celcius (-273.15 to 100) = ");
    scanf("%f",&n1);

    if ((n1 == -273.15))
    {
    printf("%f  is the Absolute Zero n1",n1 );
    }
    else if ((n1 > -273.15 && n1 < 0))
    {
    printf("%f is Too Cold to Survive.", n1);
    }
    else if ((n1 == 0))
    {
    printf("%f is the Freezing Point for Water.", n1);
    }
    else if ((n1 > 0 && n1 < 21))
    {
    printf("%f is a Good Temprature to Enjoy your day.", n1);
    }
    else if ((n1 == 21))
    {
    printf("%f is the Room Temprature.", n1);
    }
    else if ((n1 > 21 && n1 < 37))
    {
    printf("%f is the somewhat HOT. You should turn on the AC.", n1);
    }
    else if ((n1 == 37))
    {
    printf("%f is the Human Body Temprature", n1);
    }
    else if ((n1 > 37 && n1 < 100))
    {
    printf("%f is Too Hot Temprature for Human to survive", n1);
    }
    else if ((n1 == 100))
    {
    printf("%f is the Temprature of Boiling Water", n1);
    }
    else
    {
    printf("Invalid entry! PLease enter grade between -273.15 to 100 only.");
    }
    return 0;
}