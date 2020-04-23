#include<stdio.h>
#include<conio.h>
main()
{
char ch[10],*p;
int i;
clrscr();
printf("Enter string ");
gets(ch);
i=length(ch); //length(&ch[0]);
printf("Length of string is %d",i);
getch();
}
int length(char *p)
{
int count=0;
while(*p!='\0')
{
	count++;
	p++;
}
return(count);
}
