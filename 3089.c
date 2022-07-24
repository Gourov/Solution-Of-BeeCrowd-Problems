#include <stdio.h>

int main()
{
    int n , h;
    int min, max;
    int sum;

    while (scanf("%d", &n), n != 0)
    {
        h = n;
        n *= 2;
        min = 0;
        max = 0;

        int list[n];

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &list[i]);

            if (h <= i)
            {
                sum = list[i] + list[--h];

                if (min == 0 && max == 0)
                {
                    min = sum;
                    max = sum;
                    continue;
                }

                if (sum > max)
                    max = sum;

                if (sum < min)
                    min = sum;
            }
        }

        printf("%d %d\n", max, min);
    }

    return 0;
}
