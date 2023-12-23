// If a five-digit number is input through the keyboard, write a 
// program to calculate the sum of its digits. (Hint: Use the modulus 
// operator ‘%’) 

#include <stdio.h>
int main(){
    printf("Enter the number: ");
    int num,k=0,sum=0;
    scanf("%d",&num);
    while(num>0){
        k = (num%10);
        sum = sum+k;
        num = (num-k)/10;
    }
    printf("Sum of the digits: %d",sum);
    return 0;
}