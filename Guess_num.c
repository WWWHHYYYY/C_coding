#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include<stdlib.h>


int main()
{
	int i = 10;
	int guess = rand() % 100;
	int num;
	
	while (i>0)
	{
		printf("请输入猜的数字");
		scanf("%d", &num);
		
		if (num > guess)
		{
			printf("猜大了，还有%d次机会", i);
			i--;
		}
		else if (num < guess)
		{
			printf("猜小了，还有%d次机会", i);
			i--;
		}
		else
		{
			printf("bingo!");
			break;
		}
	}
	return 0;
}