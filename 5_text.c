//202510303132
//19021947041@163.com
//乐振

#include<stdio.h>

int dengcha(int a1, int an,int step)
{
	return step * (a1 + an) / 2;
}
int main()
{
	int sum = dengcha(1, 100, 100);
	printf("计算结果为：%d", sum);
	return 0;
}
