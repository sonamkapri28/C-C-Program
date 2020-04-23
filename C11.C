#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
char ch;
clrscr();
printf("Enter character in upper case : ");
scanf("%c",&ch);
printf("Character converted into lower case : %c",tolower(ch));
getch();
}