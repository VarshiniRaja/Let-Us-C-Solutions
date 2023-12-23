// Temperature of a city in Fahrenheit degrees is input through the 
// keyboard. Write a program to convert this temperature into 
// Centigrade degrees.
//c/5=f-32/9
//

#include <stdio.h>

int main(){
    float tf,tc;
    printf("Enter the temperature: ");
    scanf("%f",&tf);
    tc = 5*((tf-32)/9);
    printf("Temperature in Celsius: %f",tc);
    return 0;
}
