// If cost price and selling price of an item are input through the 
// keyboard, write a program to determine whether the seller has 
// made profit or incurred loss. Also determine how much profit he 
// made or loss he incurred.

#include <stdio.h>
int main(){
    float cp,sp;
    printf("Enter the cost price of the article ");
    scanf("%f",&cp);
    printf("Enter the selling price of the article");
    scanf("%f",&sp);
    if (cp>sp){
        printf("Loss has occured");
        float loss = cp-sp;
        printf("\n%f",loss);
    }else if(sp>cp){
        printf("Profit has occured");
        float profit = sp-cp;
        printf("\n%f",profit);
    }

    return 0;
}