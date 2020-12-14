#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int DigitSum(int n)
{
	if (n > 9)
		return DigitSum(n / 10) + n % 10;
	else
		return n;
}
int main()
{
	int n = 1729;
	
	printf("%d",DigitSum(n));
	return 0;
}