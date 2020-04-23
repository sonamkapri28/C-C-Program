#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
char c='8';
clrscr();
if(isalpha(c))
{
	printf("Alphabetic character");
}
else
{
	printf("Not Alphabetic character");
}
getch();
}