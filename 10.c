//Write a structure to store the name, account number and balance of customers (more than 10) and store their information. 
//1 - Write a function to print the names of all the customers having balance less than $200.
// 2 - Write a function to add $100 in the balance of all the customers having more than $1000 in their balance and then print the incremented value of their balance.
#include<stdio.h>
#include<string.h>
struct customer
{
    char name[50];
    int acc_no;
    int bal;
}c[11];
void bal(){
    for(int i=0; i<3; i++){
        if(c[i].bal < 200)
        printf("%s\n", c[i].name);
    }
}
void add(){
    int sum=0;
    for(int i=0; i<3; i++){
        if(c[i].bal > 1000)
        c[i].bal =c[i].bal + 100;
        printf("%d\n", c[i].bal );
    }
}
int main(){
    for(int i=0; i<3; i++){
        printf("Enter the name\n");
        //scanf("%s", &c[i].name);
        fflush(stdin);
        gets(c[i].name);
        printf("Enter the account number\n");
        scanf("%d", &c[i].acc_no);
        printf("Enter the balance\n");
        scanf("%d", &c[i].bal);
       
    }
    bal ();
    add();
    return 0;
}


