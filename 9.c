//Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10). 
//Store the information of the students. - Write a function to print the names of all the students having age 14.
//Write another function to print the names of all the students having even roll no.
//Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).

#include<stdio.h>
struct student
{
    int roll_no, age;
    char name[50], add[50];
}s[11];
void name(){
    for(int i=0; i<11; i++){
    if(s[i].age == 14)
    printf("%s, ", s[i].name);
    }
}
void roll(){
    for(int i=0; i<11; i++){
        if(s[i].roll_no % 2 == 0)
        printf("%s, ", s[i].name);
    }
}
void details(){
    for(int i=0; i<11; i++){
    printf("Roll no: %d",s[i].roll_no);
    printf("Age: %d", s[i].age);
    printf ("%s",&s[i].name);
    printf ("%s",&s[i].add);
    }
}
int main(){
    for( int i=0; i<11; i++){
    printf("Enter the name of the student\n");
    scanf("%s",&s[i].name);
    printf("Enter the roll no.\n");
    scanf("%d",&s[i].roll_no);
    printf("Enter the age\n");
    scanf("%d",&s[i].age);
    printf("Enter the address\n");
    scanf("%s",&s[i].add);
    }
    name ();
    roll ();
    details ();
    return 0;
}