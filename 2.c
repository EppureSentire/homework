//202510303132
//19021947041@163.com
//乐振

#include <stdio.h>

int main()
{
	int arr[5] = { 0 };
	printf("请录入数组：");
	for (int i = 0; i < 5; i++)
	{
		int a;
		scanf_s("%d", &a);
		arr[i] = a;
	}
	for (int i = 0; i < 5; i++)
	{
		int* p = &arr[i];
		*p = *p * 2;
	}
	for (int i = 0; i < 5; i++)
	{
		if (i == 0)
		{
			printf("%d", arr[i]);
		}
		else
		{
			printf(" %d", arr[i]);
		}
	}
	return 0;
}
