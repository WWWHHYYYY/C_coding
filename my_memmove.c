#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>

char* my_memmove( void* dst, const void* src,size_t num)

{
	char* ch_dst = (char*) dst;
	const char* ch_src = (char*)src;
	if (ch_dst >= ch_src && (ch_dst ) <= ch_src+num)
	{
		//´ÓºóÍùÇ°
		for (size_t i = num - 1; i >= 0; i--)
		{
			ch_dst[i] = ch_src[i];
		}
	}
	else
	{
		for (size_t j = 0; j < num; j++)
		{
			ch_dst[j] = ch_src[j];
		}
	}
	return dst;
}





int main()

{

	char str[] = "abcedfhigklmn";

	char strr[] = "higklmn";
	char strrr[] = "lmnn";



	

		printf("%s\n", my_memmove(str, strr,sizeof(strr)));
		printf("%s\n", my_memmove(str, strrr, sizeof(strrr)));

	


	return 0;



}