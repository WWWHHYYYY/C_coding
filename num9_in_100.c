#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include<stdlib.h>


int main()
{
	int i = 1;
	int num = 0;
	int x = 0, y = 0;
	for (; i < 101;i++)
	{
		x = i % 10;//找出个位数为9的个数
		y = i / 10;//找出百位数为9的个数
		if (x == 9 )
		{
			num += 1;
		}
		if ( y == 9)
		{
			num += 1;
		}
		
	}
	printf("%d", num);
		return 0;
}