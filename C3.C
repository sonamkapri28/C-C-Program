#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
char c='8';
clrscr();
if(isgraph(c))
{
	printf("graph");
}
else
{
	printf("Not graph");
}
getch();
}