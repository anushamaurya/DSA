//Write a program to add two distances in inch-feet using structure. The values of the distances is to be taken from the user.
#include<stdio.h>
struct{
    float inch;
    float feet;
}dis;
int main(){
    printf("Enter the distance in inch\n");
    scanf("%f", &dis.inch);
    printf("Distance in feet is %f:\n", dis.inch/12);

    printf("Enter the distance in feet\n");
    scanf("%f", &dis.feet);
    printf("Distance in feet is %f:\n", dis.feet*12);
    return 0;
}