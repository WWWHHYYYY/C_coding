#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>

int judge_rotate(char *p1, char *p2, int Long)
{
	
	int j = 0;
	int k = 0;
	int m = 0;
	
	
		for (int j = 0; j < Long; j++)
		{
			int goal = 0;
			if ((*(p1)) == (*(p2 + j)))
			{
				for (int k = 0; k < Long; k++)
				{
					if ((*(p1+ k)) == (*(p2 + j + k)))
					{
						goal++;
					}
				}
				

			}
			if ((*(p1)) == (*(p2+j)))
			{
				for (int m = 0; m < Long; m++)
				{
					if ((*(p1+goal)) == (*(p2 + m)))
					{
						goal++;
						
					}
				}

			}

			if (goal == Long)
			{
				return 1;
			}
			

		}
	
		return 0;
}
	

int main()

{
	char s1[] = "AABCD";
	char s2[] = "BCDAA";
	int l1 = strlen(s1);
	char ss1[] = "AABCD";
	char ss2[] = "BCAAA";
	int l2 = strlen(ss1);
	printf("%d\n", judge_rotate(ss1, ss2, l2));
	printf("%d\n", judge_rotate(s1, s2, l1));
	
	return 0;
	
}


