#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter number : ");
scanf("%d",&n);
if(n & 1)
{
	printf("%d is odd number");
}
else
{
	printf("%d is even number");
}
getch();
}