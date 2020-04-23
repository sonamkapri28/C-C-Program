#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
char c=' ';
clrscr();
if(isspace(c))
{
	printf("white space");
}
else
{
	printf("Not white space");
}
getch();
}