//Write a program to add, subtract and multiply two complex numbers using structures to function.
#include<stdio.h>
struct complex
{
    int real;
    int imaginary;
}z1,z2;
int main(){
    printf("Enter the real parts\n");
    scanf("%d %d",&z1.real, &z2.real);
    printf("Enter the imaginary parts\n");
    scanf("%d %d",&z1.imaginary, &z2.imaginary);
    printf("Addition = %d + %di\n", z1.real+z2.real, z1.imaginary);
    printf("Subtraction = %d %di\n", z1.real-z2.real, z1.imaginary-z2.imaginary);
    printf("Multiplication = %d + %di\n", z1.real*z2.real, z1.imaginary*z2.imaginary);
    
    return 0;
}