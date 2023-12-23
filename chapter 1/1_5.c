// The length and breadth of a rectangle and radius of a circle are 
// input through the keyboard. Write a program to calculate the area 
// and perimeter of the rectangle, and the area and circumference of 
// the circle.

#include <stdio.h>
int main(){
    float l,b,r;
    printf("Input the length of the Rectangle: ");
    scanf("%f",&l);
    printf("Input the breadth of the Rectangle: ");
    scanf("%f",&b);
    printf("Input the radius of the Circle: ");
    scanf("%f",&r);
    float rar = l*b;
    float rpr = 2*(l+b);
    float ca = 4*(3.14)*(r*r);
    float cp = 2*(3.14)*r;
    printf("Perimeter of the rectangle: %f\n",rpr);
    printf("Area of the rectangle: %f\n",rar);
    printf("Area of the Circle: %f\n",ca);
    printf("Circumference of the Circle: %f",cp);
    return 0;
}