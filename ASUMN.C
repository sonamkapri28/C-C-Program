#include<stdio.h>
#include<conio.h>
main()
{
int a[100] ,i,n,sum=0;
float avg;
clrscr();
printf("Enter the limit of array \n");
scanf("%d",&n);
printf("Enter the elements in array \n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	sum=sum+a[i];
}
avg=sum/n;
printf("Sum is : %d \n",sum);
printf("Average is : %f",avg);
getch();
}

