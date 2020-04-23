#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int n,rem,i=0,sum=0;
clrscr();
printf("Enter the no");
scanf("%d",&n);
while(n!=0)
{
	rem=n%10;
	sum=sum+rem*pow(2,i);
	n=n/10;
	i++;
}
printf("Decimal number = %d",sum);
getch();
}