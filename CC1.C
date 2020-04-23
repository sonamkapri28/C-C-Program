#include<stdio.h>
#include<conio.h>
#define FLAG 8
void main()
{
int a=20,b=4;
clrscr();
#if FLAG >= 3
printf("Value of flag is greater than or equal to 3 \n");
a=a+b;
b=a*b;
printf("Values of variable a nd b have been changes \n");
#endif
printf("a=%d,b=%d \n",a,b);
printf("Program completed \n");
getch();
}