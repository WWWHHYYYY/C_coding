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
		x = i % 10;//�ҳ���λ��Ϊ9�ĸ���
		y = i / 10;//�ҳ���λ��Ϊ9�ĸ���
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