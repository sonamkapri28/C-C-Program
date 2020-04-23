#include<stdio.h>
#include<conio.h>
int rightshift(int,int);
void main()
{
int n,x,y;
clrscr();
printf("Enter x and n ");
scanf("%d%d",&x,&n);
y=rightshift(x,y);
printf("%d",y);
getch();
}
int rightshift(int x, int n)
{
int s;
s=(x>>n);
return s;
}
