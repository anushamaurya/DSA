// Write a program to compare two dates entered by user. Make a structure named Date to store the elements day, month and year to store the dates. 
//If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".
#include <stdio.h>
struct date
{
    int day, month, year;
}d1,d2;

int main()
{   printf("Enter the first day:\n");
    scanf("%d",&d1.day);
    printf("Enter the second day:\n");
    scanf("%d",&d2.day);
    printf("Enter the first month:\n");
    scanf("%d",&d1.month);
    printf("Enter the second month:\n");
    scanf("%d",&d2.month);
    printf("Enter the first year:\n");
    scanf("%d",&d1.year);
    printf("Enter the second year:\n");
    scanf("%d",&d2.year);
    if(d1.day==d2.day && d1.month==d2.month && d1.year==d1.year)
    printf("Dates are equal");
    else 
    printf("Dates are not equal");
    return 0;
}