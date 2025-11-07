//202510303132
//19021947041@163.com
//乐振

#include <stdio.h>

int main()
{
	int shu[10];
	int i;
	int j;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &shu[i]);
	}
	for (i = 0; i < 9; i++)
	{
		for (j = 0;j < 9 - i;j++)
		{
			if (shu[j] > shu[j + 1])
			{
				int a = shu[j];
				shu[j] = shu[j + 1];
				shu[j + 1] = a;
			}
		}
	}
	printf("排序之后的数为：\n");
	for (i = 0; i < 10; i++)
	{
		if (i == 0)
		{
			printf("%d", shu[i]);
		}
		else
		{
			printf(" %d", shu[i]);
		}
	}
	printf("\n");
	return 0;
}
