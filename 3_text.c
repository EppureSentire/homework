//202510303132
//19021947041@163.com
//乐振
#include <stdio.h>

int main()
{
	int a;
	int b;
	char c;
	int d;
	printf("a的值为：");
	scanf(" %d", &a);
	printf("b的值为：");
	scanf(" %d", &b);
	printf("运算符为：");
	scanf(" %c", &c);
	if (c == '+' )
	{
		printf("计算结果为：%d",d = a + b);
	}
	else if (c == '-')
	{
		printf("计算结果为：%d", d = a - b);
	}
	else if (c == '*')
	{
		printf("计算结果为：%d", d = a * b);
	}
	else if (c == '/')
	{
		if (b == 0)
		{
			printf("除数不能为零");
		}
		else
		{
			printf("计算结果为：%d", d = a / b);
		}
	}
	return 0;
}
