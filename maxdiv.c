#include<stdio.h>

#include <string.h>



void maxdiv(int a,int b)
{
	int i = a;
	while (i)
	{

		if (a%i == 0 && b%i == 0)
		{
			printf("最大公约数为%d", i);
			break;
		}
		i--;
	}
}
int main()
{
	maxdiv(-108,1988);
		return 0;
}