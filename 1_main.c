//202510303132
//19021947041@163.com
//乐振

#include <stdio.h>

int main()
{
	//设s表示摄氏度数，h表示华氏度数。
	float s;
	printf("请输入摄氏温度：");
	scanf("%f", &s);
	float h = s * 9 / 5 + 32;
	printf("转化成的华氏温度为：%.1f", h);
	return 0;
}
