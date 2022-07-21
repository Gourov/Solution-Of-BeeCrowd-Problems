#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    while (scanf("%d", &n), n != 0)
    {
        int p;

        for (int row = 1; row <= n; row++)
        {

            int dec;
            int g = row;

            if (g > 1)
                dec = 1;
            else
                dec = 0;

            for(int col = 1; col <= n; col++)
            {
                int num;

                if (dec)
                {
                    num = g--;

                    if (g == 1)
                        dec = 0;
                }
                else
                {
                    num = g++;
                }

                if (col == n)
                {
                    printf("%3d", num);
                }
                else
                {
                    printf("%3d ", num);
                }

            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
