#include<stdio.h>
#include<conio.h>
main()
{
int n,*p,i;
clrscr();
printf("Enter no of elements ");
scanf("%d",&n);
p=(int*)calloc(n*sizeof(int));
printf("Enter elements ");
for(i=0;i<n;i++)
{
	scanf("%d",(p+i));
}
printf("Elements are : ");
for(i=0;i<n;i++)
{
	printf("%d ",*(p+i));
}
getch();
}