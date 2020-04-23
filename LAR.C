#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
clrscr();
printf("Enter value of a \n");
scanf("%d",&a);
printf("Enter value of b \n");
scanf("%d",&b);
printf("Enter the value of c \n");
scanf("%d",&c);
if(a>b)
{
	if(a>c)
		printf("a is largest");
	else
		printf("c is largest");
}
else
{
	if(b>c)
		printf("b is largest");
	else
		printf("c is largest");
}
getch();
}