#include<stdio.h>
#include<conio.h>
#include<string.h>
struct emp
{
	int id;
	char name[10];
	int sal;
};
main()
{
int i,k,max;
struct emp e[3];
clrscr();
printf("Enter employee details \n");
for(i=0;i<3;i++)
{
	printf("Employee id : ");
	scanf("%d",&e[i].id);
	printf("Employee name : ");
	scanf("%s",e[i].name);
	printf("Employee salary : ");
	scanf("%d",&e[i].sal);
}
max=e[0].sal;
for(i=0;i<3;i++)
{
	if(e[i].sal>max)
	{
		max=e[i].sal;
		k=i;
	}
}
printf("Employee id of highest paid employee is %d \n",e[k].id);
printf("Employee name of highest paid employee is %s \n",e[k].name);
printf("Employee salary of highest paid employee is %d ",e[k].sal);
getch();
}
