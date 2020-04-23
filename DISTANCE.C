#include<stdio.h>
#include<conio.h>
struct distance
{
	int feet;
	float inch;
}d1,d2,d3;
void input();
void add();
void main()
{
clrscr();
input();
add();
getch();
}
void input()
{
printf("Enter first distance ");
scanf("%d",&d1.feet);
scanf("%f",&d1.inch);
printf("Enter second distance ");
scanf("%d",&d2.feet);
scanf("%f",&d2.inch);
}
void add()
{
d3.feet=d1.feet+d2.feet;
d3.inch=d1.inch+d2.inch;
printf("Sum in feet %d \n",d3.feet);
printf("Sum in inch %f ",d3.inch);
}
