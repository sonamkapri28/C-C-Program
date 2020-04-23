#include<stdio.h>
#include<conio.h>
main()
{
int i,j,n=1;
clrscr();
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
	 if(j<=(6-i))
	{
	printf("  %d ",n);
	n++;
	}
	else
	{
	printf(" ");
	}
}
printf("    \n  ");
}
getch();
}