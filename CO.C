#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char ch1,ch2;
int i=0,j=0;
clrscr();
printf("Enter first string : ");
scanf("%s",&ch1);
printf("Enter second string : ");
scanf("%s",&ch2);
while(ch1[i]!='\0')
{
	i++;
}
while(ch2[j]!='\0')
{
	ch1[i]=ch2[j];
	j++;
	i++;
}
ch1[i]='\0';
puts(ch1);
getch();
}
