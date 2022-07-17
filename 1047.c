#include <stdio.h>

int main()
{
    int init_hour, init_min, fin_hour, fin_min;
    scanf("%d %d %d %d", &init_hour, &init_min, &fin_hour, &fin_min);

    int inti_total = (init_hour*60) + init_min;
    int fin_total = (fin_hour*60) + fin_min;

    int dif = fin_total - inti_total;
    dif += (dif <= 0) ? (24*60) : 0;

    int dif_hour = dif/60;
    int dif_min = dif%60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", dif_hour, dif_min);

    printf("\n");
    return 0;
}
