#include<stdio.h>
#include<conio.h>
main()
{
int n;
clrscr();
printf("Enter the number \n");
scanf("%d",&n);
if(n>75)
	printf("Grade A");
else if(n>=60)
	printf("Grade B");
else if(n>=40)
	printf("Grade C");
else
	printf("Grade D");
getch();
}