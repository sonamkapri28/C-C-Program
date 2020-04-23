#include<stdio.h>
#include<conio.h>
#define FLAG
main()
{
int a=20,b=4;
clrscr();
#ifdef FLAG
printf("Flag is defined \n");
a++;
b++;
#endif FLAG==1
printf("a = %d , b = %d \n",a,b);
printf("Program completed");
getch();
}

