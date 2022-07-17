#include <stdio.h>
#include <math.h>

int main()
{
   int A, B, C;
   scanf("%d %d %d" , &A , &B, &C);

   int greatAB = (A + B + abs(A-B))/2;
    printf("%d eh o maior", (greatAB > C) ? greatAB : C);

    printf("\n");
    return 0;
}
