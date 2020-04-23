#include<stdio.h>
#include<conio.h>
#include<math.h>
  void parent(int);
void main()
{
	int depth,i,n,m,choice,p;
	int a[10];
	char c;
	clrscr();
	printf("Enter the depth : ");
	scanf("%d",&depth);
	m=pow(2,(depth+1));
	n=m-1;
	printf("Enter the elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	do
	{
	printf("\n1.To know Parent \n2.Exit \n");
	printf("Enter the choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("Enter the node whom parent u want to know : ");
		scanf("%d",&p);
		parent(p);
		break;
		case 2:exit();
		break;
		default:printf("Invalid choice");
		break;
	}
	printf("Do u want to continue [y/n] ? ");
	fflush(stdin);
	scanf("%c",&c);
	}
	while(c=='y');
	getch();
}
void parent(int p)
{
	int papa;
	papa=(p-1)/2;
	printf("Papa is %d",papa);
}