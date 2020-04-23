#include<stdio.h>
#include<conio.h>
main()
{
int a[10],b[10],i,n;
clrscr();
printf("Enter the limit \n");
scanf("%d",&n);
printf("Enter the elements in array \n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	b[i]=a[i];
}
printf("Copied array is :");
for(i=0;i<n;i++)
{
	printf("%d ",b[i]);
}
getch();
}

