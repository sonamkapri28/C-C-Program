#include<stdio.h>
#include<conio.h>
main()
{
int year;
clrscr();
printf("Enter the year which you want to check \n");
scanf("%d",&year);
if((year%4==0 && year%100!=0)||(year%400==0))
{
printf("Leap year");
}
else
{
printf(" Not Leap year");
}
getch();
}