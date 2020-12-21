#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

void bubble_sort(int a[], int sz)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	
	for (i = 0; i < sz-1; i++)

	{
		int count = 0;
		for (j = 0; j < sz-i; j++)
		{
			if (a[j + 1] > a[j])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				count = 1;
			}
		}
		if (count=0)
		{
			return;
		}
	}

}

int main()
{

	int a[] = {1,5,7,9,2,4,5,8,10};
	int sz = sizeof(a) / sizeof(int);
	
	
	bubble_sort(a, sz);

	int i = 0;
	for (i=0; i < sz; i++)

	{
		printf("%d ", a[i]);
		
	}
	
	
	return 0;
}