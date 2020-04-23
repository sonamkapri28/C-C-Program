#include<stdio.h>
#include<conio.h>
void write();
void display();
void main()
{
int choice;
char c;
clrscr();
do
{
printf("1.write \n2.display \nEnter the choice\n");
scanf("%d",&choice);
switch(choice)
{
	case 1:write();
		break;
	case 2:display();
		break;
	default:
		printf("Invalid choice");
		break;
}
printf("Do you want to continue ");
fflush(stdin);
scanf("%s",&c);
}
while(c=='y'||c=='Y');
getch();
}
void write()
{
	FILE *fp,*fc;
	char ch[10];
	int  i,j;
	fp=fopen("f1.txt","w");
	printf("Enter string ");
	scanf("%s",ch);
	fputs(ch,fp);
	fclose(fp);
}
void display()
{
	FILE *fp,*fc;
	char ch1[10];
	fp=fopen("f1.txt","r");
	if(fp==NULL)
	{
		printf("File does not exist");
	}
	else
	{
		fc=fopen("fc.txt","w");
		fgets(ch1,10,fp);
		printf("Copied ");
		fputs(ch1,fc);
	}
fclose(fc);
fclose(fp);
}
