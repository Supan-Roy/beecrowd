#include <stdio.h>
int main()
{
    float a, b = 1, c, S = 0;
    for (a = 1; a <= 100; a++)
    {
        c = 1 / a;
        S += c;
    }
    printf("%.2f\n", S);
    return 0;
}