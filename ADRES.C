#include<stdio.h>
#include<conio.h>
main()
{
int a[5][5],i,j;
clrscr();
printf("Enter the elements \n");
for(i=0;i<5;i++)
{
	scanf("%d",&a[i][j]);
}
for(i=0;i<5;i++)
{
	printf("%d \t",a[i][j]);
	printf("%u \n",&a[i][j]);
}
getch();
}