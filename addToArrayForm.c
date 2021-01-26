#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<stdlib.h>





int* addToArrayForm(int* A, int ASize, int K, int* returnSize) {

	//思路：将数组 X 和整数 K 从最后一位开始，每一位相加，放到一个新的数组中

	int asize = ASize;

	//第一步，计算k的位数
	int ksize = 0;
	int m = K;
	while (m > 0)
	{
		m /= 10;
		ksize++;
	}

	//第二步，算出开辟新空间所需的大小 -> k的位数与X的位数大的那一位 +1；
	int retasize = 0;
	if (ksize > ASize)
	{
		retasize = ksize + 1;
	}
	else
	{
		retasize = ASize + 1;
	}
	//给新的数组开辟空间
	int* retarr = malloc(retasize * sizeof(int));

	//开始计算，先将计算结果顺序存放，最后倒置（倒放数组尾处下标不确定）
	int next = 0;
	int i = 0;
	int Ai = ASize - 1;
	int knum;
	while (Ai >= 0 || K > 0)
	{




		//找出k的每一位
		knum = K % 10;
		K /= 10;
		int Anum = 0;
		if (Ai >= 0)
		{
			Anum = A[Ai--];
		}
		int ret = knum + next + Anum;
		if (ret >= 10)//大于10，进位
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