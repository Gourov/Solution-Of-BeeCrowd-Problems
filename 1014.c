#include <stdio.h>
#include <math.h>

int main()
{
    int X;
    double Y;
    scanf("%d %lf" , &X , &Y);

    double milage = X / Y;
    printf("%0.3lf km/l", milage);

    printf("\n");
    return 0;
}
