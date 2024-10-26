#include <stdio.h>

int main()
{
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--)
    {
        long long PA, PB; // Population of cities A and B
        double G1, G2;    // Growing rates for cities A and B

        scanf("%lld %lld %lf %lf", &PA, &PB, &G1, &G2);

        int years = 0;
        while (PA <= PB)
        {
            PA += (PA * G1 / 100); // Calculate the new population of A after growth
            PB += (PB * G2 / 100); // Calculate the new population of B after growth
            years++;

            if (years > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }

        if (years <= 100)
        {
            printf("%d anos.\n", years);
        }
    }

    return 0;
}
