#include<stdio.h>
#include<conio.h>
main()
{
int n,x=0,y=0,i=0,z=0;
clrscr();
printf("Enter 5-digit number ");
scanf("%d",&n);
while(n>0)
{
	x=n%10;
	x=x+1;
	y=y*10+x;
	n=n/10;
}
while(y>0)
{
	i=y%10;
	z=z*10+i;
	y=y/10;
}
printf("The number is %d",z);
getch();
}