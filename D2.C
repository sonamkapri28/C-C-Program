#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,i,j,max,min;
clrscr();
printf("Enter limit");
scanf("%d",&n);
printf("Enter array");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(a[i]>a[j] && a[i]!=a[j] && a[i]>max)
		{
			max=a[i];
		}
	}
}
printf("Largest number is %d\n",max);
min=a[0];
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(a[i]<a[j] && a[i]!=a[j] && a[i]<min)
		{
			min=a[i];
		}
	}
}
printf("Smallest number is %d",min);

getch();
}