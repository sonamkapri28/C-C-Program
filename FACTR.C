#include<stdio.h>
#include<conio.h>
#include<time.h>
int factorial(int);
static int count=0;
void main()
{
	int n,ans;
	clock_t start,end;
	clrscr();

	printf("Enter number : ");
	scanf("%d",&n);

	start=clock();
	ans=factorial(n);
	end=clock();

	printf("\nFactorial of %d is %d",n,ans);
	printf("\n\nTotal no. of Execuatble Statements %d",count);
	printf("\n\nCPU Execution Time %f",(end-start)/CLOCKS_PER_SEC);

	getch();
}
int factorial(int n)
{
	if(n<=1)
	{
		count++;
		return 1;
	}
	else
	{
		count++;
		return n*factorial(n-1);
	}
}