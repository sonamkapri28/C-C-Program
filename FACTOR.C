#include<stdio.h>
#include<conio.h>
main()
{
int n,i;
clrscr();
printf("Enter the number");
scanf("%d",&n);
printf("Factors are : ");
for(i=1;i<=n;i++)
{
	if(n%i==0)

	{
		printf("%d ",i);
	}
}
getch();
}