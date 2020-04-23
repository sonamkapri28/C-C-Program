#include<stdio.h>
#include<conio.h>
main()
{
int fact=1,n;
clrscr();
printf("Enter the number \n");
scanf("%d",&n);
while(n>=1)
{
	fact=fact*n;
	n--;
}
printf("Factorial is %d",fact);
getch();
}