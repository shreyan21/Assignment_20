#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements : ");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	i--;
	printf("Reversed array elements : ");
	while(i>=0)
	{
		printf("%d ",*(a+i));
		i--;
	}
	getch();
	return 0;
	
}
