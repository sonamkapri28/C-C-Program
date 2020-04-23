#include<stdio.h>
#include<conio.h>
main()
{
char a;
clrscr();
printf("Enter the character \n");
scanf("%c",&a);
if((a>='a' && a<='z')||(a>='A' && a<='Z'))
{
printf("%c is an alphabet",a);
}
else
{
printf("%c is not an alphabet",a);
}
getch();
}
