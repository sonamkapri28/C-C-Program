#include<stdio.h>
#include<conio.h>
int sum(int [3][3]);
void main()
{
int i,j,a[3][3];
clrscr();
printf("Enter the elements in matrix \n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
sum(a[][]);
getch();
}

int sum(int a[3][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sum+=a[i][j];
			}
		}
	}
	printf("The sum of the diagonal elements is %d ",sum);
}


