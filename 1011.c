#include <stdio.h>
#include <math.h>

int main()
{
   double radius , pi = 3.14159;
   scanf("%lf" , &radius);

   double vol = (4.0/3)*pi*pow(radius , 3);

    printf("VOLUME = %0.3lf", vol);

    printf("\n");
    return 0;
}
