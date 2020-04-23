#include<stdio.h>
#include<conio.h>
main()
{
int a=20,b=4;
clrscr();
#ifndef MAX
printf("Max is not defined \n");
a--;
b--;
#endif
printf("a = %d , b = %d \n",a,b);
printf("Program completed");
getch();
}

