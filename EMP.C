#include<stdio.h>
#include<conio.h>
struct emp
{
	int id;
	char name[10];
	int sal;
};
struct emp e[5];
int i;
void employee();
void display();
main()
{
	clrscr();
	employee();
	display();
	getch();
}
void employee()
{
	printf("Enter employee details \n");
	for(i=0;i<5;i++)
	{
		printf("Empoyee's id : ");
		scanf("%d",&e[i].id);
		printf("Employee's name : ");
		scanf("%s",e[i].name);
		printf("Employee's salary : ");
		scanf("%d",&e[i].sal);
	}
}
void display()
{
	for(i=0;i<5;i++)
	{
		printf("Enter employee id : %d\n",e[i].id);
		printf("Enter employee name : %s\n",e[i].name);
		printf("Enter employee salary : %d\n",e[i].sal);
	}
}
