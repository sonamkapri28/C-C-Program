#include<stdio.h>
#include<conio.h>
int isprime(int);
int main()
{
int x,y,i,count,t,u;
clrscr();
printf("Enter range : ");
scanf("%d%d",&x,&y);
t=isprime(x);
u=isprime(y);
if(t==1&&u==1)
{
	printf("prime argument");
}
printf("prime numbers between the range are : ");
while(x<y)
{
	count=0;
	for(i=2;i<x/2;i++)
	{
		if(x %i=0)
		{
			count=1;
			break;
		}
	}
	if(count==0)
	{
		printf("%d ",x);
	}
	x++;
}
return 0;
}
int isprime(int x)
{
int count=0,i;
for(i=1;i<=x;i++)
{
	if(x%i==0)
	count++;
}
if(count==2)
return 1;
else
return 0;
}
