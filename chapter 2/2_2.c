// If a five-digit number is input through the keyboard, write a 
// program to reverse the number

#include <stdio.h>
#include <math.h>
int main(){
    printf("Enter the number: ");
    double k=0;
    int num;
    scanf("%d",&num);
    for (int i=0;i<5;i++){
        k = k+((num%10)*pow(10,4-i));
        num = (num-(num%10))/10;
    }
    printf("The reversed number is: %lf",k);
    return 0;
}