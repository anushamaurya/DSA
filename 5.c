//Write a program to add two complex numbers using structure. The values of the complex number is to be taken from the user.
#include<stdio.h>
struct complex
{
    int real;
    int imaginary;
}z;
int main(){
    printf("Enter the real part\n");
    scanf("%d",&z.real);
    printf("Enter the imaginary part\n");
    scanf("%d",&z.imaginary);
    printf("z = %d + %di", z.real, z.imaginary);
    return 0;
}