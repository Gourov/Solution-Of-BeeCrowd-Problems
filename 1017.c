#include <stdio.h>

int main()
{
    int const millage = 12;
    int hour, speed;
    scanf("%d %d" , &hour, &speed);

    int totalDis = speed*hour;
    double oil = (double) totalDis/millage;

    printf("%.3lf", (double) oil);
    printf("\n");
    return 0;
}
