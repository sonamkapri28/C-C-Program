#include<stdio.h>
#include<conio.h>
void input();
void binary(int [],int, int, int);
int a[10],n,search,low,high,mid,i,choice,ans;
void main()
{
	clrscr();
	printf("1.Insert Element in array \n2.Binary Search \n");
	printf("Enter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:input();
		case 2: printf("Enter the number to be search : ");
			scanf("%d",&search);
			low=0;
			high=n-1;
			binary(a,search,low,high);
			break;
		default:printf("Invalid choice");
			break;
	}
	getch();
}
void input()
{
	printf("Enter array size : ");
	scanf("%d",&n);
	printf("Enter array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void binary(int a[],int search,int low,int high)
{
	mid=(low+high)/2;
	if(search==a[mid])
	{
		printf("Number found at %d position",mid+1);
	}
	else if(search < a[mid])
	{
		binary(a,search,low,mid-1);
	}
	else if(search > a[mid])
	{
		binary(a,search,mid+1,high);
	}
	else
	{
		printf("Number not found");
	}
}
