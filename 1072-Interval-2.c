#include <stdio.h>
int main()
{
    int n, x, y, i, j, k, l, m = 1;
    scanf("%d %d", &x, &n);
    k = n / x;
    l = x;
    for (i = 1; i <= k; i++)
    {
        printf("%d", m);
        for (j = m + 1; j <= l; j++)
        {
            printf(" %d", j);
        }
        printf("\n");
        m = m + x;
        l = l + x;
    }
    return 0;
}