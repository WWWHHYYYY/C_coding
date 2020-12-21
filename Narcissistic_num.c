#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<math.h>

void Narcissistic_num(int n)
{
	int i = 0;
	for (i = 0; i <= n; i++)
	{
		int j = i;
		int k = 1;
		//求n的位数；
		while (j > 9)
	{

	k++;
	j = j / 10;
	}
		int ret = 0;
		int h = i;
		int g = k;
		//计算每一位的k次方和
		while (g)
		{
			ret += pow((h % 10), k);
			h = h / 10;
			g--;
		}
		//判断是否为水仙花数
		if (ret == i)
		{
			printf("%d\n", i);
		}
	}
}

int main()
{
	
	Narcissistic_num(100000);
	
	
	return 0;
}
