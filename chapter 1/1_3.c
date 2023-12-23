// If the marks obtained by a student in five different subjects are 
// input through the keyboard, write a program to find out the 
// aggregate marks and percentage marks obtained by the student. 
// Assume that the maximum marks that can be obtained by a student 
// in each subject is 100.

#include <stdio.h>
int main(){
    printf("Enter the marks obtained by the student: \n");
    int tel,hin,eng,mat,sci;
    printf("Telugu: ");
    scanf("%d",&tel);
    printf("Hindi:");
    scanf(" %d",&hin);
    printf("English: ");
    scanf("%d",&eng);
    printf("Maths: ");
    scanf("%d",&mat);
    printf("Science:");
    scanf("%d",&sci);
    printf("1");
    int agm = tel+hin+eng+mat+sci;
    float pm = (((float)agm)/500)*100;
    printf("Aggregate Marks are: %d\n",agm);
    printf("Percentage Marks are: %f",pm);
    return 0;
}