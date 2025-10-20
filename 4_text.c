//202510303132
//19021947041@163.com
//乐振
#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	printf("a边为：");
	scanf("%d", &a);
	printf("b边为：");
	scanf("%d", &b);
	printf("c边为：");
	scanf("%d", &c);
	if (a < 0 || b < 0 || c < 0)
	{
		printf("错误！请输入正确的边长");
	}
	else if (a + b > c && b + c > a && a + c > b)
	{
		printf("可以组成三角形");
	}
	else
	{
		printf("不能组成三角形");
	}

	return 0;
}
