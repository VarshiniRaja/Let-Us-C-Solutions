// Consider a currency system in which there are notes of seven 
// denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If 
// a sum of Rs. N is entered through the keyboard, write a program to 
// compute the smallest number of notes that will combine to give Rs. 
// N.

#include <stdio.h>
int main(){
    printf("Enter the sum ");
    int sum,k=0;
    scanf("%d",&sum);
    printf("%d",sum);
    while(sum>=0){
        if (sum>100){
            k++;
            sum=sum-100;
        }else if(sum>50){
            k++;
            sum =sum-50;
        }else if(sum>10){
            k++;
            sum=sum-10;
        }else if(sum>5){
            k++;
            sum = sum-5;
        }else if(sum>2){
            k++;
            sum =sum-2;
        }else if(sum>=1){
            k++;
            sum=sum-1;
        }else{
            break;
        }
    }
    printf("Minimum number of nodes required would be: %d",k);
}