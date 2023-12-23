// The distance between two cities (in km.) is input through the 
// keyboard. Write a program to convert and print this distance in 
// meters, feet, inches and centimeters.
#include <stdio.h>
int main(){
    printf("Input the distance: ");
    float distinkm;
    scanf("%f",&distinkm);
    float distinm = distinkm*1000;
    float distinfeet = distinm*3.28;
    float distininch = distinm*39.37;
    float distincm = distinm*100;
    printf("Distance in Meters: %f\n",distinm);
    printf("Distance in Feet: %f\n",distinfeet);
    printf("Distance in Inches: %f\n",distininch);
    printf("Distance in Centimeters: %f\n",distincm);

    return 0;
}