//202510303132
//19021947041@163.com
//乐振

#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	int d;
	int e = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	e = a + b + c + d;
	int arr[5] = { a,b,c,d,e };
	for (int i = 0; i < 5; i++)
	{
		if (i < 4)
		{
			printf("%d ", arr[i]);
		}
		else
		{
			printf("%d", arr[i]);
		}
	}
	return 0;
}
