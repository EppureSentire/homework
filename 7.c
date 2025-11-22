//202510303132
//19021947041@163.com
//乐振

void xu(int* arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] >= arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
#include <stdio.h>

int main()
{
	int arr[10] = { 0 };
	int len = 10;
	printf("请输入数组：");
	for (int i = 0; i < len; i++)
	{
		int a;
		scanf_s("%d", &a);
		arr[i] = a;
	}
	xu(arr, len);
	for (int i = 0; i < len; i++)
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
