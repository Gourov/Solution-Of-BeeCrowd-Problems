#include <stdio.h>
#include <math.h>
#include <string.h>

#define max(a,b) ((a >= b) ? a : b)
#define min(a,b) ((a <= b) ? a : b)

struct Spell
{
    char name[6];
    int area[3];
    int damage;
};

int main()
{
    int _case;
    scanf("%d", &_case);

    struct Spell spells[] = {{"fire", {20, 30, 50}, 200}, {"water", {10, 25, 40}, 300}, {"earth", {25, 55, 70}, 400}, {"air", {18, 38, 60}, 100}};
    while(_case--)
    {
        int w , h , x1, y1;
        scanf("%d %d %d %d", &w, &h, &x1, &y1);

        int x2 = w + x1, y2 = h + y1;

        int level, xC, yC;
        char name[6];
        scanf("%s %d %d %d", &name, &level, &xC, &yC);

        int xN = max(x1, min(x2, xC));
        int yN = max(y1, min(y2, yC));

        int r, d;
        for (int i = 0; i < 4; i++)
        {
            struct Spell aSpell = spells[i];
            if(!strcmp(aSpell.name, name))
            {
                r = aSpell.area[level - 1];
                d = aSpell.damage;
                break;
            }
        }

        int intersect = ((pow(xN - xC, 2) + pow(yN - yC, 2)) <= pow(r, 2));
        printf("%d\n", intersect ? d : intersect);
    }
    return 0;
}
