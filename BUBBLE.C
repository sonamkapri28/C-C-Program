#include<stdio.h>
#include<conio.h>
#include<time.h>
void input();
void bubble(int [],int);
int a[10],n,i,j,temp;
static int count=0;
void main()
{
	clock_t start,end;

	clrscr();

	input();

	start=clock();
	bubble(a,n);
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
void bubble(int a[],int n)
{
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j] < a[i])
			{
				count++;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("Array after Bubble Sort : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}