// Two numbers are input through the keyboard into two locations C 
// and D. Write a program to interchange the contents of C and D.

#include <stdio.h>
int main(){
    printf("Enter the number in the order a,b");
    int a,b;
    scanf("%d %d",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Values of a and b after exachange are %d and %d",a,b);
    return 0;
}