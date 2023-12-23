// Write a program to receive values of latitude (L1, L2) and longitude
// (G1, G2), in degrees, of two places on the earth and output the 
// distance (D) between them in nautical miles. The formula for 
// distance in nautical miles is:
// D = 3963 cos inverse( sin L1 sin L2 + cos L1 cos L2 * cos ( G2 – G1 ) )

#include <stdio.h>
#include <math.h>
#define PI 3.14159f 
int main(){
    printf("Enter the coordinates of the place in latitude and longitude order: ");
    double l1,l2,g1,g2;
    double rl1,rl2,rg1,rg2;
    scanf("%lf %lf %lf %lf",&l1,&l2,&g1,&g2);
    rl1 = l1*(PI/180);
    rl2 = l2*(PI/180);
    rg1 = g1*(PI/180);
    rg2 = g2*(PI/180);
    double d = 3963 * (acos((sin(rl1)*sin(rl2))+(cos(rl1)*cos(rl2))*(cos(rg2-rg1))));
    printf("The nautical miles distance between two given places is %lf",d);
    return 0;
}