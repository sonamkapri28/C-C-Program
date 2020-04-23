#include<stdio.h>
#include<conio.h>
#include<time.h>
void input();
void binary(int [],int);
int low,high,mid,search,n,i,a[10];
static int count=0;
void input()
{
	printf("Enter array limit \n");
	scanf("%d",&n);
	printf("Enter array elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void binary(int a[],int n)
{
	printf("Enter the element which you want to search \n");
	scanf("%d",&search);
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low <= high)
	{
		if(search==a[mid])
		{
			count++;
			printf("Number is found at %d position ",(mid+1));
			break;
		}
		else if(search>a[mid])
		{
			count++;
			low=mid+1;
		}
		else
		{
			count++;
			high=mid-1;
		}
		mid=(low+high)/2;
	}
}
void main()
{
	clock_t start,end;

	clrscr();

	input();
	start=clock();
	binary(a,n);
	end=clock();

	printf("\n\nTotal no.of Execution Statements %d",count);
	printf("\n\nCPU Execution Time %f",(end-start)/CLOCKS_PER_SEC);
	getch();
}