// Given the coordinates (x, y) of center of a circle and its radius, write 
// a program that will determine whether a point lies inside the circle,
// on the circle or outside the circle. (Hint: Use sqrt( ) and pow( )
// functions)

#include <stdio.h>
#include<math.h>
int main(){
    printf("give the coordinates of the center and the radius in order");
    float x1,x2,y1,y2,r;
    scanf("%f %f %f",&x1,&y1,&r);
    printf("give the coordinates of the point");
    scanf("%f %f",&x2,&y2);
    float dist = pow(((pow((x2-x1),2))+(pow((y2-y1),2))),0.5);
    if(dist>r){
        printf("point lies outside the circle");
    }else if(dist<r){
        printf("point lies inside the circle");
    }else{
        printf("point lies on the circumference");
    }
    return 0;
}