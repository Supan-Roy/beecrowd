#include <stdio.h>
int main()
{
    int X, i, sum = 0;
    while (1)
    {
        scanf("%d", &X);
        sum = 0;
        if (X == 0)
            break;
        else if (X % 2 == 0)
        {
            for (i = X; i <= X + 8; i += 2)
                sum = sum + i;
        }
        else
        {
            for (i = X + 1; i <= X + 9; i += 2)
                sum = sum + i;
        }
        printf("%d\n", sum);
    }
    return 0;
}