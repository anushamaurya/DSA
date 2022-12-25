//Write a program to store and print the roll no., name, age and marks of a student using structures. 
//Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 1.
#include<stdio.h>
struct students{
    int roll_no;
    char name[50];
    int age;
    int marks;
}a,b,c,d,e;
int main(){
    printf("Enter the roll no, age and name of a\n");
    scanf("%d %d %s", &a.roll_no, &a.age, &a.name);
    printf("Enter the roll no, age and name of b\n");
    scanf("%d %d %s", &b.roll_no, &b.age, &b.name);
    printf("Enter the roll no, age and name of c\n");
    scanf("%d %d %s", &c.roll_no, &c.age, &c.name);
    printf("Enter the roll no, age and name of d\n");
    scanf("%d %d %s", &d.roll_no, &d.age, &d.name);
    printf("Enter the roll no, age and name of e\n");
    scanf("%d %d %s", &e.roll_no, &e.age, &e.name);
    printf("Name:%s\n",a.name);
    printf("Roll no.%d\n",a.roll_no);
    printf("age%d\n",a.age);
    printf("Name:%s\n",b.name);
    printf("Roll no.%d\n",b.roll_no);
    printf("age%d\n",b.age);
    printf("Name:%s\n",c.name);
    printf("Roll no.%d\n",c.roll_no);
    printf("age%d\n",c.age);
    printf("Name:%s\n",d.name);
    printf("Roll no.%d\n",d.roll_no);
    printf("age%d\n",d.age);
    printf("Name:%s\n",e.name);
    printf("Roll no.%d\n",e.roll_no);
    printf("age%d\n",e.age);
    
    return 0;
}