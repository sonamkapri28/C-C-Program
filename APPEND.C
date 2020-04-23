#include<stdio.h>
#include<conio.h>
main()
{
FILE *fp;
char ch[10];
int  i;
clrscr();
fp=fopen("f2.txt","a");
printf("Enter string ");
gets(ch);
if(fp==NULL)
{
	printf("File does not exist ");
}
for(i=0;i<strlen(ch);i++)
{
	fputc(ch[i],fp);
}
fclose(fp);
getch();
}