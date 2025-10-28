//202510303132
//19021947041@163.com
//乐振

#include <stdio.h>

int main()
{
	printf("请输入一个数：");
	int a;
	scanf("%d", &a);
	int b = 2;
	if (a <= 1 || a >= 50)
	{
		return 0;
	}
	while (b < a)
	{
		if (a % b == 0)
		{
			printf("密钥不安全，请重新输入");
				return 0;
		}
	}
	printf("密钥安全，密码设置成功");
	return 0;
}
