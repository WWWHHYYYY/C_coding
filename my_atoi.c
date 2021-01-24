#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<stdlib.h>



int my_atoi(char* str)
{
	int ret = 0;
	int int_sign = 1;
	
	while (isspace(*str))//跳过空格
	{
		str++;
	}

	while (*str == '\0')//提前结束
	{
		return 0;
	}
	if (*str == '-')//判断正负
	{
		int_sign = -1;
		str++;
	}
	if ( *str == '+')
	{
		str++;

	}
	while (isdigit(*str))
	{
		ret = ret * 10 + *(str)-'0';
		str++;

	}
	ret = int_sign * ret;

	if (*str == '\0')
	{
		return (int)ret;
	}
}


int main()
{
	char arr[] = "  -25998779";
	
	printf("%d\n", my_atoi(arr));
	
	return 0;
}