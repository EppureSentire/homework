//202510303132
//19021947041@163.com
//乐振

#include <stdio.h>

int main()
{
    int arr[5] = { 0 };
    int i = 0;

    printf("请输入5个整数：\n");

    while (i < 5)
    {
        int a;
        scanf("%d", &a);

        if (a % 2 == 0)
        {
            arr[i] = a;
            i++;
        }
        else
        {
            printf("输入的是奇数，请重新输入这个数：");
        }
    }

    printf("过滤后的数组为：");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
