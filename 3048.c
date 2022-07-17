#include <stdio.h>

int main()
{
    int len;
    scanf("%d", &len);

    int seq[len];
    for (int i = 0; i < len; i++)
        scanf("%d", &seq[i]);

    int count = 1 , cur = seq[0];

    for (int i = 1; i < len; i++)
    {
        if (cur != seq[i])
        {
            count++;
            cur = seq[i];
        }
    }

    printf("%d", count);

    printf("\n");
    return 0;
}
