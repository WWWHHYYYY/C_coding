#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<stdlib.h>





int* addToArrayForm(int* A, int ASize, int K, int* returnSize) {

	//˼·�������� X ������ K �����һλ��ʼ��ÿһλ��ӣ��ŵ�һ���µ�������

	int asize = ASize;

	//��һ��������k��λ��
	int ksize = 0;
	int m = K;
	while (m > 0)
	{
		m /= 10;
		ksize++;
	}

	//�ڶ�������������¿ռ�����Ĵ�С -> k��λ����X��λ�������һλ +1��
	int retasize = 0;
	if (ksize > ASize)
	{
		retasize = ksize + 1;
	}
	else
	{
		retasize = ASize + 1;
	}
	//���µ����鿪�ٿռ�
	int* retarr = malloc(retasize * sizeof(int));

	//��ʼ���㣬�Ƚ�������˳���ţ�����ã���������β���±겻ȷ����
	int next = 0;
	int i = 0;
	int Ai = ASize - 1;
	int knum;
	while (Ai >= 0 || K > 0)
	{




		//�ҳ�k��ÿһλ
		knum = K % 10;
		K /= 10;
		int Anum = 0;
		if (Ai >= 0)
		{
			Anum = A[Ai--];
		}
		int ret = knum + next + Anum;
		if (ret >= 10)//����10����λ
		{
			ret -= 10;
			next = 1;
		}
		else
		{
			next = 0;
		}
		retarr[i++] = ret;
	}
	if (next == 1)
	{
		retarr[i++] = 1;
	}
	*returnSize = i;
	int left = 0;
	int right = i - 1;
	while (left < right)
	{
		int tmp = retarr[right];
		retarr[right] = retarr[left];
		retarr[left] = tmp;
		++left;
		--right;
	}
	return retarr;
}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8 };
	int k = 87645321;
	int Asize = sizeof(arr) / sizeof(int);
	int* retu = 0;
	addToArrayForm(arr, Asize, k, &retu);
	


	return 0;
}