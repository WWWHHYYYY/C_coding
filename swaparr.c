#include<stdio.h>



void sortnum(int a[],int b[],int c[],int size)
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i < size; i++)
	{
		if (a[i] % 2 == 0)
		{
			b[j] = a[i];
			j++;
		}
		else
		{
			c[k] = a[i];
			k++;
		}
	}
	for (i = 0; i < k; i++)
	{
		a[i] = c[i];
	}
	for (i =0; i <j; i++)
	{
		a[i + k] = b[i];
	}
}

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10,22,33,15,17,18 };
	int size = sizeof(a) / sizeof(int);
	int b[100] = { 0 };
	int c[100] = { 0 };
	sortnum(a, b, c, size);
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d\n", a[i]);
	}

	return 0;
}


