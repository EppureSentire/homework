//202510303132
//19021947041@163.com
//乐振
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* ptr = (int*)malloc(5*sizeof(int));
	printf("请输入5个整数：");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d",ptr + i );
	}
	for (int i = 0; i < 5; i++)
	{
		if (i == 0)
		{
			printf("%d", *(ptr + i));
		}
		else
		{
			printf(" %d", *(ptr + i));
		}
	}
	printf("\n");
	free(ptr);
	return 0;
}
