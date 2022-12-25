//Write a structure to store the names, salary and hours of work per day of 10 employees in a company.
//Write a program to increase the salary depending on the number of hours of work per day as follows 
//and then print the name of all the employees along with their final salaries.
//Hours of work per day 8 Increase in salary $50
#include<stdio.h>
struct emp
{
    char name[50];
    int salary;
    int hrs;
}e[10];

int main(){
    for(int i=0; i<10; i++){
        printf("Enter the name\n");
        fflush(stdin);
        gets(e[i].name);
        //scanf("%s",&e[i].name);
        printf("Enter your salary and working hours per day\n");
        scanf("%d%d", &e[i].salary, &e[i].hrs);
        if(e[i].hrs > 8){
        e[i].salary = 50 + e[i].salary;
        printf("Name: %s\n",e[i].name);
        printf("Final salary: %d\n",e[i].salary);
        }
        else
        printf("Final salary: %d\n",e[i].salary);
        
    }
    return 0;
}
