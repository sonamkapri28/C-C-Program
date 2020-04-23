#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,sum=0;
clrscr();
printf("Enter the number ");
scanf("%d",&n);
if(n>0)
{
	do
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	while(n>0);
}
printf("Sum is %d",sum);
getch();
}