#include<stdio.h>
#include<conio.h>
main()
{
int x=2,y;
clrscr();
y=x++ + ++x;
printf("x= %d ",x);
printf("y= %d ",y);
getch();
}