#include<stdio.h>
#include<conio.h>
#include<string.h>
void swap(char*a,char*b)
{
	char temp[strlen(a)];
	strcpy(temp,a);
	strcpy(a,b);
	strcpy(b,temp);
}
int main()
{
	char a[40],b[40];
	gets(a);
	fflush(stdin);
	gets(b);
	printf("Before swap : a=%s  and  b=%s\n",a,b);
	swap(a,b);
	printf("After swap : a=%s  and  b=%s\n",a,b);
	getch();
	return 0;
}
