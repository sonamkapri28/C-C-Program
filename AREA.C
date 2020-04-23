#include<stdio.h>
#include<conio.h>
main()
{
int r;
float a,p,pi=3.14;
clrscr();
printf("Enter the radius \n");
scanf("%d",&r);
a=pi*r*r;
p=2*pi*r;
printf("Area of circle is %f \n",a);
printf("Perimeter of circle is %f",p);
getch();
}