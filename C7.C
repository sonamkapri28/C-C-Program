#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
char c='8';
clrscr();
if(isprint(c))
{
	printf("printable character");
}
else
{
	printf("Not printable charcter");
}
getch();
}