#include <stdio.h>
int main()
{
    int N, i, a, b, c;
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        a = i;
        b = i * i;
        c = i * i * i;
        printf("%d %d %d\n", a, b, c);
        printf("%d %d %d\n", a, b + 1, c + 1);
    }
    return 0;
}