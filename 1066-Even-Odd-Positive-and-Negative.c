#include <stdio.h>
int main()
{
    int i, n, even = 0, odd = 0, positive = 0, negative = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            even++;
        }
        else if (n % 2 != 0)
        {
            odd++;
        }
        if (0 < n)
        {
            positive++;
        }
        else if (0 > n)
        {
            negative++;
        }
    }
    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positive);
    printf("%d valor(es) negativo(s)\n", negative);

    return 0;
}