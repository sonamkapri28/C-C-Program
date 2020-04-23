#include<stdio.h>
#include<conio.h>
#include<alloc.h>
main()
{
int i,n,*p;
clrscr();
printf("Enter no of elemnets to be entered : ");
scanf("%d",&n);
p=(int *)malloc(n*sizeof(int));
if(p==NULL)
{
	printf("Memory not available \n");
}
printf("Enter an integer : ");
for(i=0;i<n;i++)
{
	scanf("%d",&p[i]);
}
for(i=0;i<n;i++)
{
	printf("%d\t",p[i]);
}
getch();
}