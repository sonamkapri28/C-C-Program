#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
char c='8';
clrscr();
if(isdigit(c))
{
	printf("Digit");
}
else
{
	printf("Not Digit");
}
getch();
}