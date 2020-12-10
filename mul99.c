#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include<stdlib.h>


int main()
{
	int i = 1;
	int mul = 1;
	for (; i < 10; i++)
	{
		int j = 1;
		for (; j < 10; j++)
		{
			if (i >= j)
			{
				mul = i * j;
				printf("%d*%d = %d ", i, j, mul);
			}
		}
		printf("\n");
	}
	return 0;
}