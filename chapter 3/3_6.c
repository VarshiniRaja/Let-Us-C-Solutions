// If the ages of Ram, Shyam and Ajay are input through the keyboard, 
// write a program to determine the youngest of the three.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the ages of 3 people");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b){
        if(a<c){
            printf("%d is smaller",a);
        }else{
            printf("%d is smaller",c);
        }
    }else{
        if(b<c){
            printf("%d is smaller",b);
        }else{
            printf("%d is smaller",c);
        }
    };

    return 0;
}