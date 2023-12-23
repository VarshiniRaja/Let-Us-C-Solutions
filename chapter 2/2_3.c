// If lengths of three sides of a triangle are input through the 
// keyboard, write a program to find the area of the triangle.

#include <stdio.h>
#include <math.h>
int main(){
    printf("Enter the three sides of the triangle: ");
    float a,b,c,s;
    scanf("%f %f %f",&a,&b,&c);
    s = (a+b+c)/2;
    double area = pow((s*(s-a)*(s-b)*(s-c)),0.5);
    printf("The area of the triangle with three sides %0.2f %0.2f %0.2f is %0.2lf", a,b,c,area);
    return 0;
}