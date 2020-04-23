#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char str[10],ch;
int i,j,n,count;
clrscr();
printf("Enter the string : ");
gets(str);
n=strlen(str);
for(i=0;i<n;i++)
{
	ch=str[i];
	if(ch!=' ')
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(ch==str[j])
			{
				count++;
				str[j]=' ';
			}
		}
		printf("%c occurs %d times \n",ch,count);
	}
}
getch();
}