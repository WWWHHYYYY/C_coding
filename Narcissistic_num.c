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
		//��n��λ����
		while (j > 9)
	{

	k++;
	j = j / 10;
	}
		int ret = 0;
		int h = i;
		int g = k;
		//����ÿһλ��k�η���
		while (g)
		{
			ret += pow((h % 10), k);
			h = h / 10;
			g--;
		}
		//�ж��Ƿ�Ϊˮ�ɻ���
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
