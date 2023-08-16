#include <stdio.h>

int main (){
    float n1, result;
    printf("Please enter temprature in degrees Celsius (-273.15 to 100) = ");
    scanf("%f",&n1);
    result= (n1*1.8)+32;
    printf("It's %f Fahrenheit." ,result);
    return 0;
}