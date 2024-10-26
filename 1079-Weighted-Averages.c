#include <stdio.h>
int main()
{
    int N, i;
    float a, b, c, sum, avg;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%f %f %f", &a, &b, &c);
        sum = a * 2 + b * 3 + c * 5;
        avg = sum / 10;
        printf("%.1f\n", avg);
    }
    return 0;
}