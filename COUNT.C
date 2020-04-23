#include<stdio.h>
#include<conio.h>
main()
{
int n,count=0;
clrscr();
printf("Enter the number \n");
scanf("%d",&n);
do
{
	n=n/10;
	count=count++;
}
while(n>0);
printf("No of digits are : %d",count);
getch();
}