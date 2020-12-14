#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int exp(int n, int k)
{
	if (k > 0)
	{
		
		return n * exp(n,--k);
	}
	else
	{
		return 1;
	}
}
int main()
{


	printf("%d", exp(9, 3));
	return 0;
}