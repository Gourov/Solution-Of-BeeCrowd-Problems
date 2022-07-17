#include <stdio.h>

int main()
{
    int Case;
    scanf("%d", &Case);

    char result[Case];
    for (int k = 0; k < Case; k++)
    {
        char f_word[15], s_word[15], l_word[15];
        scanf("%s %s %s", &f_word, &s_word, &l_word);

        char f1, f2, s1, s2;
        int first = 1;

        for (int i = 0; i < 15; i++)
        {
            if (l_word[i] == '\0')
                break;

            if(l_word[i] == '_')
            {
                if(first)
                {
                    f1 = f_word[i];
                    s1 = s_word[i];
                    first = 0;
                }
                else
                {
                    f2 = f_word[i];
                    s2 = s_word[i];
                    break;
                }
            }
        }

        result[k] = (f1 == s2 || f2 == s1) ? 'Y' : 'N';
    }


    for (int i = 0; i < Case; i++)
    {
        printf("%c\n", result[i]);
    }
    return 0;
}
