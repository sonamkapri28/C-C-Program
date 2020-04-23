#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,i,j,k,s;
clrscr();
printf("Enter array limit ");
scanf("%d",&n);
printf("Enter array : ");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]==a[j])
		{
		s=j;
		for(k=j+1;k<n;k++,s++)
			{
				a[s]=a[k];
				s=i;
			}
		n--;j--;
		}
	}
}
printf("New array after elimination : ");
for(i=0;i<n;i++)
{
	printf("%d ",a[i]);
}
getch();
}
