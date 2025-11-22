//202510303132
//19021947041@163.com
//乐振

#include <stdio.h>

int main()
{
	int a;
	printf("请输入a的数值：");
	scanf_s("%d", &a);
	int* p = &a;
	*p = *p + 10;
	printf("%d,%d ", a,*p);
	return 0;
}
