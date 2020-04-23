#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
char c='F';
clrscr();
if(isxdigit(c))
{
	printf("hexadecimal character");
}
else
{
	printf("Not hexadecimal character");
}
getch();
}