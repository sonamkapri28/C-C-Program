#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,a[2][2],b[2][2],choice,s[2][2],t[2][2],m[2][2];
clrscr();
printf("Enter the elements in first matrix \n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
printf("Enter the elements in second matrix \n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		scanf("%d",&b[i][j]);
	}
}
printf("1.Addition \n2.Subtraction \n3.Multiplication \n4.Transpon \n");
printf("Enter the choice \n");
scanf("%d",&choice);
switch(choice)
{
case 1:
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			s[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Sum of two matrix is \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",s[i][j]);
		}
		printf("\n");
	}
	break;
case 2:
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			s[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("Subtraction of two matrix is \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",s[i][j]);
		}
		printf("\n");
	}
	break;
case 3:
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			m[i][j]=0;
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				m[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("Multiplication of two matrix is \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	break;
case 4:
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			t[i][j]=a[j][i];
		}
	}
	printf("Transpose matrix \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			 printf("%d ",t[i][j]);
		}
		printf("\n");
	}
	break;
default:
	printf("Invalid choice ");
	break;
}
getch();
}







