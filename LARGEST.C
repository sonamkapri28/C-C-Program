#include<stdio.h>
#include<conio.h>
main()
{
int a,b;
clrscr();
printf("Enter value of a \n");
scanf("%d",&a);
printf("Enter value of b \n");
scanf("%d",&b);
if(a>b)
	printf("a is largest");
else
	printf("b is largest");
getch();
}