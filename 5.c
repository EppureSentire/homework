//202510303132
//19021947041@163.com
//乐振

void function(int *arr,int len)
{
	for (int i = len - 1; i > 0; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[0] = 0;
	for (int i = 0; i < 5; i++)
	{
		if (i == 0)
		{
			printf("%d", arr[i]);
		}
		else
		{
			printf( "%d", arr[i]);
		}
	}
}
#include<stdio.h>

int main()
{
	int arr[5] = { 0 };
	int len = 5;
	printf("请输入数组：");
	for (int i = 0; i < 5; i++)
	{
		int a;
		scanf_s("%d", &a);
		arr[i] = a;
	}
	function(arr,len);
	return 0;
}
