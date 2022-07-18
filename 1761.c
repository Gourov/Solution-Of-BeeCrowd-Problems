#include <stdio.h>
#include <math.h>

int main()
{
    double angle, distance, height;
    const double Pi = 3.141592654;

    while (scanf("%lf %lf %lf", &angle, &distance, &height) != EOF)
    {
        double tree = tan(angle * (Pi/180)) * distance + height;

        printf("%0.2lf\n", tree * 5);
    }

    return 0;
}
