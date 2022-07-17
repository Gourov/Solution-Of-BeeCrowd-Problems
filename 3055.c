#include <stdio.h>

int main()
{
    int grade, avarage;
    scanf("%d %d", &grade, &avarage);

    int X = 2*avarage - grade;
    printf("%d", X);

    printf("\n");
    return 0;
}
