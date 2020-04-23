#include<stdio.h>
#include<conio.h>
main()
{
int n,i,sum=0;
clrscr();
printf("Enter the no");
scanf("%d",&n);
for(i=2;i<=n;i=i+2)
{
	sum=sum+i;
}
	printf("Sum of all even digits = %d \n",sum);

getch();
}