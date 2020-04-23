#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
char c='8';
clrscr();
if(iscntrl(c))
{
	printf("control");
}
else
{
	printf("Not control");
}
getch();
}