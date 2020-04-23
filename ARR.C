#include<stdio.h>
#include<conio.h>
main()
{
int choice,pos,value,i,j,k,n,a[10],search,b[10],temp,mid,low,high;
char ch;
clrscr();
do
{
printf("Enter the limit of array \n");
scanf("%d",&n);
printf("Enter the elements in array \n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("1.Insert an element in array \n2.Delete an element from array from specific position \n3.Linear Search when element is at multiple locations \n4.Binary Search \n5.Insertion Sort \n 6.Selection Sort \n 7.Bubble Sort \n");
printf("Enter the choice \n");
scanf("%d",&choice);
switch(choice)
{
	case 1:
		printf("Enter the position at which you want to insert the value in an array \n");
		scanf("%d",&pos);
		printf("Enter the value you want to insert in an array \n");
		scanf("%d",&value);
		for(i=n-1;i>=pos;i--)
		{
			a[i+1]=a[i];
		}
		a[pos]=value;
		n++;
		printf("New array after inserted is :");
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		break;
	case 2:
		printf("Enter the position at which you want to delete the value in an array \n");
		scanf("%d",&pos);
		for(i=pos;i<n;i++)
		{
			a[i]=a[i+1];
		}
		n--;
		printf("New array after deletion is :");
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		break;
       case 3:
		printf("Enter the element which you want to search \n");
		scanf("%d",&search);
		for(i=0;i<n;i++)
		{
			if(a[i]==search)
			{
				printf("Element is found at position %d \n",i);
			}
			if(i==n)
			{
				printf("Element is not found");
			}
		}
		break;
	case 4:
		printf("Enter the element which you want to search ");
		scanf("%d",&search);
		low=0;
		high=n-1;
		mid=(low+high)/2;
		while(low<=high)
		{
			if(a[mid]<search)
			low=mid+1;
			else if(a[mid]==search)
			{
				printf("Number found at %d position \n",mid);
				break;
			}
			else
				high=mid-1;
			mid=(low+high)/2;
		}
		break;
       case 5:
		for(k=1;k<n;k++)
		{
			temp=a[k];
			for(i=k-1;temp<a[i] && i>=0;i--)
			{
				a[i+1]=a[i];
			}
			a[i+1]=temp;
		}
		printf("Insertion Sorted array is : ");
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
		break;
	 case 6:
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		printf("Selection Sorted array is : ");
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
		break;
	 case 7:
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		printf("Bubble Sorted array is : ");
		for(i=0;i<n;i++)
		printf("%d ",a[i]);
		printf("\n");
			break;
		case 10:
			printf("Enter the limit of array \n");
			scanf("%d",&n);
			printf("Enter the elements in array \n");
			for(i=0;i<n;i++)
			{
				scanf("%d",&b[i]);
			}
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					if(a[i]==b[i])
					break;
					else
					b[i]=a[i]^b[i];
				}
			}
			for(i=0;i<n;i++)
			{
				printf("%d",b[i]);
			}
			break;
		default:
			printf("Invalid choice ");
			break;
}
	printf("\nDo you want to continue ?");
	fflush(stdin);
	scanf("%c",&ch);
}
while(ch=='y'||ch=='Y');
getch();
}




