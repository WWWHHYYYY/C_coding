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
		printf("������µ�����");
		scanf("%d", &num);
		
		if (num > guess)
		{
			printf("�´��ˣ�����%d�λ���", i);
			i--;
		}
		else if (num < guess)
		{
			printf("��С�ˣ�����%d�λ���", i);
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