#include<stdio.h>
#include<conio.h>
#include<time.h>
void input();
void insertion(int [],int);
int n,a[10],i,j,k,temp;
static int count=0;
void main()
{
	clock_t start,end;

	clrscr();

	input();

	start=clock();
	insertion(a,n);
	end=clock();

	printf("\n\nTotal no. of Executable Statement %d",count);
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
void insertion(int a[],int n)
{    count++;
	for(k=1;k<n;k++)
	{
		count++;
		temp=a[k];
		j=k-1;
		while(j>=0 && temp<=a[j])
		{
		       //	count++;
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("Array after Insertion Sort : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}