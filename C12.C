#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
char ch;
clrscr();
printf("Enter character in lower case : ");
scanf("%c",&ch);
printf("Character converted into upper case : %c",toupper(ch));
getch();
}