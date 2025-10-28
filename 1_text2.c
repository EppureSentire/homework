//202510303132
//19021947041@163.com
//乐振

#include<stdio.h>

int main()
{
	printf("请输入一个数：");
	int a;
	scanf("%d", &a);
	if (a <= 1 || a >49)
	{
		return 0;
	}
	for (int b = 2; b < a; b++)
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
