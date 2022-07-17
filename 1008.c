#include <stdio.h>

int main()
{
    int n, h;
    double s , S;

    scanf("%d %d %lf" , &n, &h, &s);

    S  = s*h;

    printf("NUMBER = %d\nSALARY = U$ %.2lf " , n, S);

    printf("\n");
    return 0;
}
