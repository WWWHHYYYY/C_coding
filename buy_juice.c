#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>



int main()

{

	int money = 0;

	int total = 0;

	int empty = 0;





	scanf("%d", &money);





	total = money;

	empty = money;

	while (empty > 1)

	{

		total += empty / 2;

		empty = empty / 2 + empty % 2;

	}
	printf("%d", total);





	return 0;

}


