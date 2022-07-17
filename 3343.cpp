#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int des = 0;

    int army, wall;
    scanf("%d %d", &army, &wall);

    char form[army];
    scanf("%s", &form);

    int s, m, l;
    scanf("%d %d %d", &s, &m, &l);

    vector<int>  walls;
    for (int k =0; k < army; k++)
    {
        int _size;
        char ch = form[k];

        if (ch == 'P')
            _size = s;
        else if (ch == 'M')
            _size = m;
        else if (ch == 'G')
            _size = l;

        if (walls.empty())
        {
            walls.push_back(wall);
        }

        for (int j = 0; j < walls.size(); j++)
        {
            if (_size > walls[j])
            {
                if (j == walls.size() - 1)
                {
                    walls.push_back(wall);
                }
                continue;
            }

            walls[j] -= _size;
            if(walls[j] < s)
            {
                walls.erase(walls.begin() + j);
                des++;
            }

            break;
        }
    }

    printf("%d\n", walls.size() + des);
    return 0;
}
