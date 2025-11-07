//202510303132
//19021947041@163.com
//乐振

#include <stdio.h>

int main()
{
	int shuju[3][3];
	int i;
	int j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0;j < 3;j++)
		{
			printf("请输入%d行第%d列的元素：",i+1,j+1);
			scanf("%d", &shuju[i][j]);
		}
	}
	printf("输入的矩阵的转置为：\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if ((i == 0 && j == 0 )||(i == 1 && j == 0)||(i == 2 && j == 0))
			{
				printf("%d",shuju[j][i]);
			}
			else
			{
				printf(" %d",shuju[j][i]);
			}
		}
		printf("\n");
	}
	return 0;
}
