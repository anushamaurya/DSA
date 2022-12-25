//Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.
#include<stdio.h>
struct marks{
    int  roll_no, name, chem_marks, maths_marks,physics_marks;
}m[5];
int main(){
    for(int i =0; i<5; i++){
        printf("Enter the Chem marks\n");
        scanf("%d", &m[i].chem_marks);
        printf("Enter the Maths marks\n");
        scanf("%d", &m[i].maths_marks);
        printf("Enter the Physics marks\n");
        scanf("%d", &m[i].physics_marks);
        printf("Percentage of %d  student chem is %d, Percentage of maths is %d, Percentage of physics is %d",i,m[i].chem_marks,m[i].maths_marks, m[i].physics_marks);
    }
    return 0;
}