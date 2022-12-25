//3. Write a program to store and print the roll no., name, age, address and marks of 15 students using structure.
#include<stdio.h>
struct student{
    int roll;
    char name[50];
    int age;
    int marks;
    char add[50];
} s[15];
int main(){
    for(int i=0; i<15; i++){
        printf("Enter the s%d name \n",i);
        // used to clear the buffer
        // and accept the next string
        fflush(stdin);
        gets(s[i].name);
        printf("and address\n");
        gets(s[i].add);
        printf("Enter the roll no, age, marks\n");
        scanf("%d%d%d",&s[i].roll, &s[i].age, &s[i].marks);
    }
    for(int i=0; i<15; i++){
        printf("Name:\n", s[i].name);
        printf("Roll no.\n:", s[i].name);
        printf("Age:\n", s[i].name);
        printf("Marks\n:", s[i].name);
        printf("Address\n:", s[i].name);

    }
    return 0;
}