#include<stdio.h>
#include<conio.h>
main()
{
int a[10],n,i,pos;
clrscr();
printf("Enter the limit of array \n");
scanf("%d",&n);
printf("Enter the elements in array \n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("Enter the position at which you want to delete the value in an array \n");
scanf("%d",&pos);
for(i=pos;i<n;i++)
{
	a[i]=a[i+1];
}
n--;
printf("New array after deletion is :");
for(i=0;i<n;i++)
{
	printf("%d ",a[i]);
}
getch();
}