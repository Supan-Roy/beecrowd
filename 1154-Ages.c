#include <stdio.h>
int main()
{
    int x, y = 0;
    float avg, z = 0;
    while (1)
    {
        scanf("%d", &x);
        if (x < 0)
            break;
        else
        {
            y += x;
            z++;
        }
    }
    avg = y / z;
    printf("%.2f\n", avg);
    return 0;
}