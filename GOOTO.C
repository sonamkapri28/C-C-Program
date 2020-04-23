#include<stdio.h>
#include<conio.h>
main()
{
int n;
clrscr();
printf("Enter the number \n");
scanf("%d",&n);
if(n%2==0)
{
	goto even;
}

else
{
	goto odd;
}
even:
	printf("Even number \n");
	goto end;
odd:
	printf("Odd number \n");
	goto end;
end:
	getch();
}