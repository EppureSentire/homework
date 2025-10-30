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
	printf("请输入学生学号：");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	int arr[5] = { a,b,c,d,0 };
	int h = arr[0];
	int i = arr[1];
	int j = arr[2];
	int k = arr[3];
	arr[0] = 0;
	arr[1] = h;
	arr[2] = i;
	arr[3] = j;
	arr[4] = k;
	for (int m = 0;m < 5;m++)
	{
		if (m == 0)
		{
			printf("%d", arr[m]);
		}
		else
		{
			printf(" %d", arr[m]);
		}
	}
}
