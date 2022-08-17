#include<stdio.h>
#include<conio.h>
int main()
{
	int total_vowel=0,total_consonant=0;
	int i=0;
	char x;
	char s[50];
	printf("Enter the string : ");
	gets(s);
	x=s[0];
	
	do
	{  if(x>=65&&x<=90||x>=97&&x<=122)
	{
	
		x=tolower(x);
		if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
		{
			total_vowel++;
		}
		else
		{
			total_consonant++;
		}
	
	}
		i++;
		x=*(s+i);
	
	}while(x);
	printf("Number of vowels are %d and number of consonants are %d\n",total_vowel,total_consonant);
	getch();
	return 0;
	
}
