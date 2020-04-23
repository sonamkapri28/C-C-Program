#include<stdio.h>
#include<conio.h>
int *fun(int *p,int n);
main()
{
int a[10]={1,2,3,4,5,6,7,8,9,10},n,*p;
n=5;
clrscr();
p=fun(a,n);
printf("value of arr=%u\nvalue of p=%u\nvalue of*p=%d\n",a,p,*p);
getch();
}
int *fun(int *p,int n)
{
p=p+n;
return p;
}