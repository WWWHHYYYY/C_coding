#include<stdio.h>

#include <string.h>


void Leapyear(int a, int b)
{

	while (a <= b)
	{
		if ((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0))
		{
			printf("%d\n", a);
		}
		a++;
	}

}
int main()
{
	Leapyear(1000, 2000);
	return 0;
}