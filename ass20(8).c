#include<stdio.h>
#include<conio.h>
int main()
{
	int n,sum=0;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int a[n];
	int i;
	printf("Enter number of elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=*(a+i);
	}
	printf("Sum of all elements in array is %d\n",sum);
	getch();
	return 0;
	
}
