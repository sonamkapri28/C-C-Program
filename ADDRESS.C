#include<stdio.h>
#include<conio.h>
main()
{
int a[5],i;
clrscr();
printf("Enter the elements \n");
for(i=0;i<5;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
	printf("%d \t",a[i]);
	printf("%u \n",&a[i]);
}
getch();
}