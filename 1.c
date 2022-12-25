#include<stdio.h>
struct report{
    char name[50];
    int roll_no;
    int marks[6];
}Anusha;
int main()
{   int sum =0;
    int per;
    printf("Enter the name\n");
    scanf("%s", &Anusha.name);
    //gets(report.name);
    printf("Enter your roll no.\n");
    scanf("%d",& Anusha.roll_no);
    printf("Enter your marks\n");
    for(int i =0; i<6; i++){
        scanf("%d", &Anusha.marks[i]);
        sum = sum+ Anusha.marks[i];
    }
    per = (float)(sum / 600)*100;
    if(per > 95)
    printf("Eligible\n");
    else
    printf("Not Eligible");
    return 0;
}









//input of name, roll,no marks in 6 subjects of one student. if eligible in delhi university
/*#include<stdio.h>
struct Student{
    char name[100];
    int rollno;
    float marks[6];
};
struct Student stud;
int main()
{
    int i;
    int sum;
    float per;
    printf("enter the name of the student\n");
    gets(stud.name);
    //scanf("%s",s.name);
    printf("enter the roll no of the student\n");
    scanf("%d",&stud.rollno);
    printf("enter the marks in six subjects\n");
    for(i=0;i<6;i++)
    {
        scanf("%f",&stud.marks[i]);
        sum=sum+stud.marks[i];
    }
    per=(float)sum/6;
    printf("roll no=%d\n",stud.rollno);
    printf("name=%s\n",stud.name);
    for(i=0;i<6;i++)
    {
        printf("marks=%f\n",stud.marks[i]);
    }
    if(per>=90)
        printf("eligible for DU");
    else
        printf("not eligible");

}*/