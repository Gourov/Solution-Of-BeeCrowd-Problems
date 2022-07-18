#include <stdio.h>

#define true 1

int main()
{
    int _case;
    while(true)
    {
        scanf("%d", &_case);
        if (_case < 0)
            break;

        int debt = 0, x = 0;
        for (int i = 0; i < _case; i++)
        {
            int fee;
            scanf("%d", &fee);

            debt += fee;
            if(debt%100 == 0)
                x++;
        }

        printf("%d\n", x);
    }

    return 0;
}
