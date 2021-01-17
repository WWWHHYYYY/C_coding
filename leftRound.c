#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>

void reverse_part(char *str, int start, int end) 
{
	int i, j;
	char tmp;

	for (i = start, j = end; i < j; i++, j--)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
}

void leftRound(char * src, int time)
{
	int len = strlen(src);
	int pos = time % len;
	reverse_part(src, 0, pos - 1); 
	reverse_part(src, pos, len - 1); 
	reverse_part(src, 0, len - 1); 
}
	

int main()

{
	char s1[] = "ACDEF";
		leftRound(s1, 2);
		int i = 0;
		for (int i = 0; i < strlen(s1); i++)
		{
			printf("%c", s1[i]);
		}

	
	
	return 0;
	
}


