//202510303132
//19021947041@163.com
//乐振
#include <stdio.h>

int main()
{
	//a表示学生的成绩
	int a;
	printf("请输入学生成绩：");
	scanf("%d", &a);
	if (a < 0 || a > 100)
	{
		printf("错误！请输入正确的学生成绩");
	}
	else if (89 < a <= 100)
	{
		printf("该生成绩等级为A");
	}
	else if (80 <= a < 90)
	{
		printf("该生成绩等级为B");
	}
	else if (70 <= a < 80)
	{
		printf("该生成绩等级为C");
	}
	else if (60 <= a < 70)
	{
		printf("该生成绩等级为D");
	}
	else
	{
		printf("该生的成绩等级为E");
	}
	
		return 0;
}
