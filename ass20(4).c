#include<stdio.h>
#include<conio.h>
int main()
{
	int a=9;
	int*p,**q,***r;
	//  Below I have demonstrated that a pointer can hold address of variable with a level one less than of pointer
	p=&a;
	q=&p;
	r=&q;
	printf("%d %d %d\n",*p,**q,***r);
	getch();
	return 0;
}
