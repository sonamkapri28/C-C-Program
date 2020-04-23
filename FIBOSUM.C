#include<stdio.h>
#include<conio.h>
main()
{
int f1=0,f2=1,next=0,n;
clrscr();
printf("Enter the limit \n");
scanf("%d",&n);
printf("Fibonacci series is : %d,%d,",f1,f2);
next=f1+f2;
while(next<=n)
{
	printf("%d,",next);
	f1=f2;
	f2=next;
	next=f1+f2;
}
getch();
}