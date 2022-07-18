#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    while (scanf("%d", &n), n != 0)
    {
        int p;
        int max_digit = (int) log10((int) pow(2, 2*n - 2)) + 1;

        for (int row = 0; row < n; row++)
        {
            p = row;

            for(int col = 0; col < n; col++)
            {
                int num = (int) pow(2, p++);
                int cur_digit = (int) log10(num) + 1;

                for(int i = 1; i <= max_digit - cur_digit; i++)
                    printf(" ");

                if (col == n - 1)
                {
                    printf("%d", num);
                }
                else
                {
                    printf("%d ", num);
                }

            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
