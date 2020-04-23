#include<stdio.h>
#include<conio.h>
struct stud
{
	int a;
	float b;
};
main()
{
	int n,i;
	struct stud *p;
	clrscr();
	printf("Enter no of records ");
	scanf("%d",&n);
	p=(struct stud*)malloc(n*sizeof(struct stud));
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i)->a);
		scanf("%f",(p+i)->b);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",*(p+i)->a);
		printf("%f",*(p+i)->b);
	}
getch();
}
