#include<stdio.h>
#include <string.h>

void max(int x,int y)
{
	if (x < y)
	{
		printf("%d", y);

	}
	else
	{
		printf("%d", x);
	}
}


int main()
{
	max(2, 3);
	return 0;
}