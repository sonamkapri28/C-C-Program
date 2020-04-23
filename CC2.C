#include<stdio.h>
#include<conio.h>
#define FLag 2
main()
{
int a=20,b=4;
clrscr();
#if FLAG >= 3
printf("Value of flag is grater than or equal to 3 \n");
a=a+b;
b=a*b;
#else
printf("Value of flag is less than 3 \n");
a=a-b;
b=a/b;
#endif
printf("a = %d , b = %d \n",a,b);
printf("Program completed");
getch();
}

