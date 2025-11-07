//202510303132
//19021947041@163.com
//乐振

#include <stdio.h>

void input_array(int arr[], int a) 
{
    printf("请输入%d个整数：", a);
    for (int i = 0; i < a; i++) 
    {
        scanf("%d", &arr[i]);
    }
}

int calculate_sum(int arr[], int a) 
{
    int sum = 0;
    for (int i = 0; i < a; i++) {
        sum += arr[i];
    }
    return sum;
}

int calculate_product(int arr[], int a) 
{
    int product = 1;
    for (int i = 0; i < a; i++) {
        product *= arr[i];
    }
    return product;
}



int main() 
{
    int arr[5];
    int a = 5;
    input_array(arr, a);
    int sum = calculate_sum(arr, a);
    int product = calculate_product(arr, a);
    printf("%d %d\n", sum, product);
    return 0;
}
