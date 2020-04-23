#include<stdio.h>
#include<conio.h>
void main()
{
int *arr[4];
int p=10,q=20,r=30,i;
clrscr();
arr[0]=&p;
arr[1]=&q;
arr[2]=&r;
for(i=0;i<=2;i++)
{
	printf("%d ",*(arr+i));
}
getch();
}