// Ramesh’s basic salary is input through the keyboard. His dearness 
// allowance is 40% of basic salary, and house rent allowance is 20% of 
// basic salary. Write a program to calculate his gross salary

#include <stdio.h>
int main(){
    printf("Enter the basic pay: ");
    int bp;
    scanf("%d",&bp);
    int da = 0.4*bp;
    int hra = 0.2*bp;
    int gs = bp+da+hra;
    printf("Dearness Allowance: %d\n",da);
    printf("House Rent Allowance: %d\n",hra);
    printf("Gross Salary: %d",gs);
    return 0;
}