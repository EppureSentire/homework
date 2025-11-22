//202510303132
//19021947041@163.com
//乐振

void add(int* arr)
{
	for (int i = 0; i < 5; i++)
	{
		arr[i] += 1;
	}
}
#include<stdio.h>


int main()
{
	int arr[5] = { 0 };
	printf("请输入数组：");
	for (int i = 0; i < 5; i++)
	{
		int a;
		scanf_s("%d", &a);
		arr[i] = a;
	}
	add(arr);
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
