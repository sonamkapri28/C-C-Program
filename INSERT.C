#include<stdio.h>
#include<conio.h>
main()
{
int a[10],n,i,pos,value;
clrscr();
printf("Enter the limit of array \n");
scanf("%d",&n);
printf("Enter the elements in array \n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("Enter the position at which you want to insert the value in an array \n");
scanf("%d",&pos);
printf("Enter the value you want to insert in an array \n");
scanf("%d",&value);
for(i=n-1;i>=pos;i--)
{
	a[i+1]=a[i];
}
a[pos]=value;
n++;
printf("New array after inserted is :");
for(i=0;i<n;i++)
{
	printf("%d ",a[i]);
}
getch();
}