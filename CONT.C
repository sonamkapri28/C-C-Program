#include<stdio.h>
#include<conio.h>
main()
{
int n,no,i,count,product=1;
clrscr();
printf("Enter the count");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	scanf("%d",&no);
	if(no==0)
	continue;
	product=product*no;
}
printf("Product is %d",product);
getch();
}