#include<stdio.h>

int Facsum(int n)
{
	int i = 1, j = 1, ret = 1;
	while (i < n)
	{
		j = j * (i + 1);
		ret += j;
		i++;



	}
	printf("%d�Ľ׳�Ϊ%d\n", n, j);
	printf("%d���ڵĽ׳˺�Ϊ%d\n", n, ret);
	return 0;
}







int main()
{
	Facsum(10);
	return 0;
}