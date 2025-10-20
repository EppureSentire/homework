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
	else if (a >= 90 && a <= 100)
	{
		printf("该生成绩等级为A");
	}
	else if (a >= 80 && a <= 89)
	{
		printf("该生成绩等级为B");
	}
	else if (a >= 70 && a <= 79)
	{
		printf("该生成绩等级为C");
	}
	else if (a >= 60 && a <= 69)
	{
		printf("该生成绩等级为D");
	}
	else
	{
		printf("该生的成绩等级为E");
	}
	
		return 0;
}
