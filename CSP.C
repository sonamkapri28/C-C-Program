#include<stdio.h>
#include<conio.h>
main()
{
char ch2[10],ch1[10];
clrscr();
printf("Enter string ");
gets(ch2);
copy(ch1,ch2); //copy(&ch1[0],&ch2[0])
printf("Copies string is %s\n",ch1);
printf("Original string is %s",ch2);
getch();
}
copy(char *a,char *b) //a=&ch1[0],b=&ch2[0]
{
while(*b!='\0')
{
	*a=*b;
	b++;
	a++;
}
*a='\0';
}