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
     for (int i = 0; i < a; i++)
        	{
        		for (int j = 0;j < a - 1 - i;j++)
        		{
        			if (arr[j] > arr[j + 1])
        			{
        				int a = arr[j];
        				arr[j] = arr[j + 1];
                        arr[j + 1] = a;
        			}
        		}
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
