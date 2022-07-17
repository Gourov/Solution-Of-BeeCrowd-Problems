#include <stdio.h>

struct Product
{
    int code;
    int num;
    double price;
};

int main()
{
   struct Product pr[2];

    for (int i = 1; i <= 2; i++)
    {
        scanf(" %d %d %lf" , &pr[i-1].code, &pr[i-1].num, &pr[i-1].price);
    }

    double total = pr[0].num * pr[0].price + pr[1].num * pr[1].price;

    printf("VALOR A PAGAR: R$ %0.2lf", total);

    printf("\n");
    return 0;
}
