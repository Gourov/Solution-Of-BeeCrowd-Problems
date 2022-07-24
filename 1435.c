#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    while (scanf("%d", &n), n != 0)
    {
        int f = ceil((double)n / 2);
        int l = n - f;

        for (int row = 1; row <= f; row++)
        {
            int max = row;

            for(int col = 1; col <= f; col++)
                printf("%3d%s", (col <= max) ? col : max, l ? " ":"");

            for(int col = l; col >= 1; col--)
                printf("%3d%s", (col <= max) ? col : max, (col != 1) ? " ": "");

            printf("\n");
        }

        for (int row = l; row >= 1; row--)
        {
            int max = row;

            for(int col = 1; col <= f; col++)
                printf("%3d ", (col <= max) ? col : max);

            for(int col = l; col >= 1; col--)
                printf("%3d%s", (col <= max) ? col : max, (col != 1) ? " ": "");

            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
