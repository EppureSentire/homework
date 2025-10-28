//202510303132
//19021947041@163.com
//乐振

#include <stdio.h>

int main()
{
	int j = 100;
	int i = 999;
	int m = 0;
	for (j = 100; j <= i; j++)
	{
		int a = j / 100;
		int b = (j % 100) / 10;
		int c = j % 10;
		if (a * a * a + b * b * b + c * c * c == j)
		{
			m++;
			if (m == 1)
			{
				printf("%d", j);
			}
			else
			{
				printf(" %d", j);
			}
		}
	}
	return 0;
}
