#include <stdio.h>

int main()
{
    int rec;
    scanf("%d", &rec);

    int total = 0;
    for (int i = 0; i < rec; i++)
    {
        int time , speed;
        scanf("%d %d", &time, &speed);

        total += time * speed;
    }

    printf("%d\n", total);
    return 0;
}
