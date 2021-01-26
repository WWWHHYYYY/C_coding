#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<stdlib.h>





void reverse(int* nums, int start, int end)
{


	int left = start;
	int right = end;

	while (left < right)
	{
		int tmp = nums[right];
		nums[right] = nums[left];
		nums[left] = tmp;
		right--;
		left++;

	}


}


int main()
{
	int k = 3;
	//先将整个数组逆置，然后逆置数组前k个数，再逆置后k个数，即可得到答案
	int nums[] = { 1,2,3,4,5,6,7 };
	int numssize = sizeof(nums) / sizeof(int);
	reverse(nums,0,numssize - 1);
	reverse(nums,0,k - 1);
	reverse(nums,k,numssize - 1);
	for (int i = 0; i < numssize; i++)
	{

		printf("%d", nums[i]);
	}
	return 0;
}