// Paper of size A0 has dimensions 1189 mm x 841 mm. Each 
// subsequent size A(n) is defined as A(n-1) cut in half parallel to its 
// shorter sides. Thus paper of size A1 would have dimensions 841 
// mm x 594 mm. Write a program to calculate and print paper sizes 
// A0, A1, A2, … A8.

#include <stdio.h>
int main(){
    float a01 = 1189;
    float a02 = 841;
    float a11,a12,a21,a22,a31,a32,a41,a42,a51,a52,a61,a62,a71,a72,a81,a82;
    a11 = a02;
    a12 = a01/2;
    a21 = a12;
    a22 = a11/2;
    a31 = a22;
    a32 = a21/2;
    a41 = a32;
    a42 = a31/2;
    a51 = a42;
    a52 = a41/2;
    a61 = a52;
    a62 = a51/2;
    a71 = a62;
    a72 = a61/2;
    a81 = a72;
    a82 = a71/2;
    printf("%0.2f %0.2f %0.2f %0.2f %0.2f %0.2f %0.2f %0.2f %0.2f %0.2f %0.2f %0.2f %0.2f %0.2f %0.2f %0.2f",a11,a12,a21,a22,a31,a32,a41,a42,a51,a52,a61,a62,a71,a72,a81,a82);


    return 0;
}