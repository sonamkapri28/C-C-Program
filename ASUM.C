#include<stdio.h>
#include<conio.h>
int f(int);
main()
{
	int k;
	k=f(3);
	printf("%d",k);
}
int f(int a)
{
	int s;
	if(a==1)
	return a;
	s=a+f(a-1);
	return s;
}
getch();
}