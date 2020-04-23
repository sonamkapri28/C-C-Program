#include<stdio.h>
#include<conio.h>
struct emp
{
	int id;
	char name[10];
	float sal;
}e;
main()
{
	clrscr();
	printf("Enter employee id : ");
	scanf("%d",&e.id);
	printf("Enter employee name : ");
	scanf("%s",e.name);
	printf("Enter employee salary : ");
	scanf("%f",&e.sal);
	printf("Employee id : %d\n",e.id);
	printf("Employee name : %s\n",e.name);
	printf("Employee salary : %f",e.sal);
	getch();
}