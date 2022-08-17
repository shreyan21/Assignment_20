#include<stdio.h>
#include<conio.h>
void swap(int*a,int*b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a,b;
	printf("Enter the numbers : ");
	scanf("%d %d",&a,&b);
	printf("Before swap:  a=%d and b=%d\n",a,b);
	swap(&a,&b);
		printf("After swap:  a=%d and b=%d\n",a,b);
	getche();
	return 0;
	
}
