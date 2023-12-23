// Wind chill factor is the felt air temperature on exposed skin due to 
// wind. The wind chill temperature is always lower than the air 
// temperature, and is calculated as per the following formula:
// wcf = 35.74 + 0.6215t + ( 0.4275t - 35.75 ) * v power 0.16
// where t is the temperature and v is the wind velocity. Write a 
// program to receive values of t and v and calculate wind chill factor
// (wcf)

#include <stdio.h>
#include <math.h>
int main(){
    printf("Enter the values of t and v in order");
    float t,v;
    scanf("%f %f",&t,&v);
    float wcf = 35.74 + 0.6215*t + (( 0.4275*t - 35.75 ) * pow(v,0.16));
    printf("Wind chill factor for the given data is %f",wcf);
    return 0;
}