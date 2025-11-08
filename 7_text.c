//202510303132
//19021947041@163.com
//乐振

#include<stdio.h>
void input_array(int arr[], int a)
{
    printf("请输入%d个整数：\n", a);
    for (int i = 0; i < a; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < a / 2; i++)
    {
        int b = arr[i];
        arr[i] = arr[a - i - 1];
        arr[a - i - 1] = b;
    }
        	printf("\n");
        	for (int i = 0; i < a; i++)
        	{
        		if (i == 0)
        		{
        			printf("%d", arr[i]);
        		}
        		else
        		{
        			printf(" %d", arr[i]);
        		}
        	}
        	printf("\n");
}
int main()
{
    int arr[5];
    int a = 5;
    input_array(arr, a);
    return 0;
}
