// Write a program to receive Cartesian co-ordinates (x, y) of a point 
// and convert them into polar co-ordinates (r, phi).
// Hint: r = sqrt ( x2 + y2) and phi = tan-1( y / x )

#include <stdio.h>
#include <math.h>
int main(){
    printf("Enter the cartesian coordinates of the point");
    int x,y;
    scanf("%d %d",&x,&y);
    float r = pow(((pow(x,2))+(pow(y,2))),0.5);
    float phi = atan(y/x);
    printf("These are the polar coorsinates of the point: %0.2f %0.2f",r,phi);
    return 0;
}

