#include<stdio.h>
#include<conio.h>
main()
{
int i,j,a[4][4],b[4][4],r1,r2,c1,c2,flag=1;
clrscr();
printf("Enter the no of rows of first matrix \n");
scanf("%d",&r1);
printf("Enter the no of columns of first matrix \n");
scanf("%d",&c1);
printf("Enter the elements  of first matrix \n");
for(i=0;i<r1;i++)
{
	for(j=0;j<c1;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
printf("Enter the no of rows of second matrix \n");
scanf("%d",&r2);
printf("Enter the no of columns of second matrix \n");
scanf("%d",&c2);
printf("Enter the elements of second matrix \n");
for(i=0;i<r2;i++)
{
	for(j=0;j<c2;j++)
	{
		scanf("%d",&b[i][j]);
	}
}
if(r1==r2 && c1==c2)
{
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			if(a[i][j]!=b[i][j])
			{
				flag=0;
				break;
			}
		}
	}
}
if(flag==1)
printf("Equal matrix ");
else
printf("Not equal matrix ");
getch();
}
