#include <stdio.h>

#define BONUS 15/100

int main()
{
    char n[10];
    double s , ts , S;

    scanf("%s %lf %lf" , n, &s, &ts);

    S  = s + (ts * BONUS);

    printf("TOTAL = R$ %0.2lf", S);

    printf("\n");
    return 0;
}
