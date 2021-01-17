#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>

char* my_strstr(const char* dst, const char* src)

{

	while ((*dst) )
	{
		if ((*dst) == (*src))
		{
			char* dstt = dst;
			char* srcc = src;
			while ((*dstt)&&(*srcc)&&(*srcc==*dstt))
			{
				++srcc;
				++dstt;
			}
			
			if ( *srcc == '\0')
			{
				return dst;
			}
			if (*dstt == '\0')
			{
				return NULL;
			}
			else
			{
				++dst;
			}
		}
		else
		{
			++dst;
		}
	}
	return NULL;
}





int main()

{

	char str[] = "abcedfhigklmn";

	char strr[] = "higklmn";
	char strrr[] = "lmnn";



	

		printf("%s\n", my_strstr(str, strr));
		printf("%s\n", my_strstr(str, strrr));

	


	return 0;



}