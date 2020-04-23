#include<stdio.h>
#include<conio.h>
#include<alloc.h>
main()
{
int i,j,rows;
int (*a)[4];
clrscr();
printf("Enter no of rows: ");
scanf("%d",&rows);
a=(int (*) [4])malloc(rows*4*sizeof(int));
for(i=0;i<rows;i++)
{
      for(j=0;j<4;j++)
      {
	scanf("%d",&a[i][j]);
      }
}
printf("The matrix is : \n");
for(i=0;i<rows;i++)
{
	for(j=0;j<4;j++)
	{
		printf("%5d",a[i][j]);
	}
	printf("\n");
}
free(a);
getch();
}