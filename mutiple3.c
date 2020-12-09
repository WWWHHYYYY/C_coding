#include<stdio.h>

#include <string.h>



void mutiple3(n)
{
	int i = 1;
	while (i < n)
	{
		if (i % 3 == 0)
		{
			printf("%d\n", i);
		}
		i++;
	}
}
int main()
{
	mutiple3(100);
		return 0;
}