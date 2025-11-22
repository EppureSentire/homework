//202510303132
//19021947041@163.com
//乐振

#include <stdio.h>

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("%d %d", *a, *b);
}
int main()
{
	int a;
	int b;
	printf("请输入a的数值：");
	scanf_s("%d", &a);
	printf("请输入b的数值：");
	scanf_s("%d", &b);
	int *m = &a;
	int *n = &b;
	swap(m,n);
	return 0;
}
