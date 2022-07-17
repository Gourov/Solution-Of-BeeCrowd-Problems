#include <stdio.h>
#include <math.h>

int main()
{
    double car1 = 1 , car2 = 1.5;       //per min
    double dis = car2 - car1;

    int target;
    scanf("%d" , &target);

    printf("%.0lf minutos", (double) target/dis);
    printf("\n");
    return 0;
}
