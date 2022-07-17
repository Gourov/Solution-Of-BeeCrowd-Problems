#include <stdio.h>

int main()
{
    int C;
    int Glass;
    for(int i = 1; i <= 4; i++)
    {
        scanf("%d", &C);
        if (C)
            Glass = i;
    }

    printf("%d\n", Glass);
    return 0;
}
