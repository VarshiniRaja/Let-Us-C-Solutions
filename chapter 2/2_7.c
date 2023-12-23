// If value of an angle is input through the keyboard, write a program 
// to print all its Trigonometric ratios

#include <stdio.h>
#include <math.h>
#define PI 3.14159f 

int main(){
    printf("enter the angle: ");
    int a;
    scanf("%d",&a);
    float b = a*(PI/180);
    printf("Sine value is %f\n",sin(b));
    printf("Cosine value is %f\n",cos(b));
    printf("Tangent value is %f\n",tan(b));
    printf("Cotangent value is %f\n",1/(tan(b)));
    printf("Secant value is %f\n",1/(cos(b)));
    printf("Cosecant value is %f\n",1/(sin(b)));

    return 0;
}