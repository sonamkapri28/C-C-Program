#include<stdio.h>
#include<conio.h>
int n;
main()
{
	int f1=0,f2=1;
	clrscr();
	printf("Enter the limit \n");
	scanf("%d",&n);
	printf("Fibonacci series is : %d %d ",f1,f2);
	fibo(f1,f2);
	getch();
}
fibo(int f1,int f2)
{
	int next;
	while(next<=n)
	{
		printf("%d ",next);
		f1=f2;
		f2=next;
		next=f1+f2;
	}
}
