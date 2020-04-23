#include<stdio.h>
#include<conio.h>
void add(int [],int);
main()
{
int a[10],n,i;
clrscr();
printf("Enter the limit : ");
scanf("%d",&n);
printf("Enter the elements in array \n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
add(a,n);
getch();
}
void add(int a[],int n)
{
int i,esum=0,osum=0,ecount=0,ocount=0;
for(i=0;i<n;i++)
{
	if(a[i]%2==0)
	{
		ecount++;
		esum+=a[i];
	}
	else
	{
		ocount++;
		osum+=a[i];
	}
}
printf("No of even no's : %d \n",ecount);
printf("Sum of even no's : %d \n",esum);
printf("No of odd no's : %d \n",ocount);
printf("Sum of odd no's : %d",osum);
}