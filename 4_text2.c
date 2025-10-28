//202510303132
//19021947041@163.com
//乐振

#include <stdio.h>

int main()
{
    int j = 100;
    int i = 999;
    int count = 0;

    while (j <= i)
    {
        int a = j / 100;
        int b = (j / 10) % 10;
        int c = j % 10;

        if (a * a * a + b * b * b + c * c * c == j)
        {
            count++;

            if (count == 1)
            {
                printf("%d", j);
            }
            else
            {
                printf(" %d", j);
            }
        }
        j++;
    }

    return 0;
}
