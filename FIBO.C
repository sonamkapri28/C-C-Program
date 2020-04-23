#include<stdio.h>
#include<conio.h>
#include<time.h>
static int count=0;
void fibonacci(int , int , int);
void main()
{
	int n,f1=0,f2=1;
	clock_t start,end;

	clrscr();

	printf("Enter the limit : ");
	scanf("%d",&n);

	start=clock();
	fibonacci(f1,f2,n);
	end=clock();

	printf("\n\nTotal no. of Execuatble Statements %d",count);
	printf("\n\nCPU Execution Time %f",(end-start)/CLOCKS_PER_SEC);

	getch();
}
void fibonacci(int f1,int f2,int n)
{
	int i,next;
	printf("%d\t %d\t",f1,f2);
	for(i=2;i<n;i++)
	{     count++;
		next=f1+f2;
		printf("%d\t",next);
		f1=f2;
		f2=next;

	}
}