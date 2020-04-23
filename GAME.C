#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
int n,guess,trial=0;
srand(time(0));
clrscr();
n=random(100);

do
{
	printf("Enter a guess between 1 and 100 : ");
	scanf("%d",&guess);
	trial++;
	if(guess>n)
	{
		printf("Too high ! \n");
	}
	else if(guess<n)
	{
		printf("Too low ! \n");
	}
	else
	{
		printf("Correct ! You got it in %d guesses ! \n",trial);
	}
}
while(guess!=n);
getch();
}