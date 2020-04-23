#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
char c='8';
clrscr();
if(ispunct(c))
{
	printf("puntuation character");
}
else
{
	printf("Not puntuation charcter");
}
getch();
}