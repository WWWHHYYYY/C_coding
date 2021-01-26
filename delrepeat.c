#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<stdlib.h>




int delrepeat(int* nums, int size)
{
	int i = 0;
	int j = 0;
	while (i < size)
	{
		while (nums[i] == nums[i+1])
		{
			i++;
			
		}
		
		nums[j++] = nums[i++];
		
	}
	return j;
}
int main()
{
	int nums1[] = { 1,2,2,2,2,3,3,3,7,7,9,9,9,9,12,12,12,12,12,13,13,13,13 };
	
	int size = sizeof(nums1) / sizeof(int);
	int j = delrepeat(nums1, size);
	for (int i = 0; i < j; i++)
	{
		printf("%d ", nums1[i]);
	}
	return 0;
}