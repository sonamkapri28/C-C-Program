#include<stdio.h>
#include<conio.h>
main()
{
int i,j,a[4][4],r,c,flag=1;
clrscr();
printf("Enter the no of rows  \n");
scanf("%d",&r);
printf("Enter the no of columns \n");
scanf("%d",&c);
printf("Enter the elements  \n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]!=1 && a[j][i]!=0)
			{
				flag=0;
				break;
			}
		}
	}
if(flag==1)
printf("Identity matrix ");
else
printf("Not identity matrix ");
getch();
}
