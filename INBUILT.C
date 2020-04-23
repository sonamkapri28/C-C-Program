#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char ch1[10],ch2[10],ch,comp;
int len,choice;
clrscr();
do
{
printf("Enter the first string : ");
scanf("%s",ch1);
printf("1.Length \n2.Copy \n3.Concatenate \n4.Reverse \n5.Lower case \n6.Upper case \n7.Compare \n");
printf("Enter the choice \n");
scanf("%d",&choice);
switch(choice)
{
case 1:
	len=strlen(ch1);
	printf("Length of string is %d \n",len);
	break;
case 2:
	strcpy(ch2,ch1);
	printf("Copied string is %s \n",ch2);
	break;
case 3:
	printf("Enter second string : ");
	scanf("%s",&ch2);
	strcat(ch1,ch2);
	puts(ch1);
	break;
case 4:
	strrev(ch1);
	printf("Reverse of string is %s \n",ch1);
	break;
case 5:
	strlwr(ch1);
	puts(ch1);
	break;
case 6:
	strupr(ch1);
	puts(ch1);
	break;
case 7:
	printf("Enter second string : ");
	scanf("%s",&ch2);
	comp=strcmp(ch1,ch2);
	if(comp==0)
	printf("Strings are equal \n");
	else
	printf("Strings are not equal \n");
	break;
default:
	printf("Invalid choice");
	break;
}
	printf("Do you want to continue ?");
	fflush(stdin);
	scanf("%c",&ch);
}
while(ch=='y'||ch=='Y');
getch();
}


