#include <stdio.h>
int main()
{
    int i, x, y, sum = 0;
    int min, max;
    scanf("%d %d", &x, &y);
    if (x < y)
    {
        min = x;
        max = y;
    }
    else
    {
        max = x;
        min = y;
    }
    for (i = min + 1; i < max; ++i)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    printf("%d\n", sum);
    return 0;
}