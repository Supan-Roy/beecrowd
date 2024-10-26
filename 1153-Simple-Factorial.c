#include <stdio.h>
int main()
{
    int N, i, factorial = 1;
    scanf("%d", &N);
    if (N < 0 || N >= 13)
    {
        printf("Invalid Input\n");
    }
    else
    {
        for (i = 1; i <= N; i++)
        {
            factorial *= i;
        }
        printf("%d\n", factorial);
    }
    return 0;
}