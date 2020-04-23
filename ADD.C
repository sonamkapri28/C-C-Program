#include<stdio.h>
#include<conio.h>
main()
{
int i,j,a[4][4],b[4][4],s[4][4],r,c;
clrscr();
printf("Enter the no of rows of first matrix \n");
scanf("%d",&r);
printf("Enter the no of columns of first matrix \n");
scanf("%d",&c);
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
printf("Enter the no of rows of second matrix \n");
scanf("%d",&r);
printf("Enter the no of columns of second matrix \n");
scanf("%d",&c);
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		scanf("%d",&b[i][j]);
	}
}
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		s[i][j]=a[i][j]+b[i][j];
	}
}
printf("Sum of two matrix is \n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
	 printf("%d ",s[i][j]);
	}
	printf("\n");
}
getch();
}