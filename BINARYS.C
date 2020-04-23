#include<stdio.h>
#include<conio.h>
#include<time.h>
void input();
void sort(int [],int);
void search(int [],int);
static int count=0;
int n,a[10],i,j,t,low,high,mid,x;
void main()
{

	clock_t start,end;

	clrscr();

	input();

	start=clock();
	sort(a,n);
	search(a,n);
	end=clock();

	printf("\n\nTotal no. of Executable Statements %d",count);
	printf("\n\nCPU Execution time %f",(end-start)/CLOCKS_PER_SEC);

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
void sort(int a[],int n)
{
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i] > a[j])
			{
				count++;
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}

	printf("\nSorted array : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void search(int a[],int n)
{
	printf("\n\nEnter number to be search ");
	scanf("%d",&x);

	low=0;
	high=n-1;
	mid=(low+high)/2;

	while(low<=high)
	{
		count++;
		if(a[mid]==x)
		{
			count++;
			printf("Elements is found at %d location",(mid+1));
			break;
		}
		else if(x < a[mid])
		{
			count++;
			high=mid-1;
		}
		else
		{
			count++;
			low=mid+1;
		}
		mid=(low+high)/2;
	}
	if(high < low)
	{
	count++;
		printf("Element not found");
	}
}