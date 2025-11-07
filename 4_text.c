//202510303132
//19021947041@163.com
//乐振

#include <stdio.h>

int chengfang(int a)
{
	a *= a;
}
int main()
{
	int sum = chengfang(1) + chengfang(2) + chengfang(3) + chengfang(4) + chengfang(5);
	printf("计算结果为：%d", sum);
	return 0;
}
