#include<stdio.h>
#include<conio.h>
main()
{
int a[10],i,max,n;
clrscr();
printf("Enter the limit \n");
scanf("%d",&n);
printf("Enter the elements in array \n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
	if(a[i]>max)
	{
		max=a[i];
	}
}
printf("Largest number in an array is %d",max);
getch();
}
