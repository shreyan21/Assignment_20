#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[40];
	gets(s);
	int i=strlen(s)-1;
	printf("Reversed string is : ");
	while(i>=0)
	{
		printf("%c",*(s+i));
		i--;
	}
	getch();
	return 0;
}
