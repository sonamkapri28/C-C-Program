#include<stdio.h>
#include<conio.h>
main()
{
int n,i,esum=0,osum=0,ecount=0,ocount=0;
clrscr();
printf("Enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	if(i%2==0)
	{
		ecount++;
		esum=esum+i;
	}
	else
	{
		ocount++;
		osum=osum+i;
	}
}
printf("no of even no %d \n",ecount);
printf("no of odd no %d \n",ocount);
printf("sum of even no %d \n",esum);
printf("sum of odd no %d \n",osum);
getch();
}