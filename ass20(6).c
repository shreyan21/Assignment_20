#include<stdio.h>
#include<conio.h>
int main()
{
	char s[50];
	int i=0,count=0;
	printf("Enter the string : ");
	gets(s);
	while(*(s+i))
	{
		count++;
		i++;
	}
	printf("Length of string is %d\n",count);
	getch();
	return 0;
}
