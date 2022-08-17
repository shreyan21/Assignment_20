#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int *p,*q;
	p=&a;
	q=&b;
	if(*p>*q)
	printf("%d is greater than %d\n",a,b);
	else
	printf("%d is greater than %d\n",b,a);
	getch();
	return 0;
}
