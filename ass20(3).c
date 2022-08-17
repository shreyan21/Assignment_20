#include<stdio.h>
#include<conio.h>
void swap(int*p,int*q)
{
	int temp=*p;
	*p=*q;
	*q=temp;
}
void sort(int*p,int size)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(p[j]>p[j+1])
			{
				swap(&p[j],&p[j+1]);
			}
		}
	}
}
int main()
{
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Sorted array is : ");
	sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
	return 0;
	
}

