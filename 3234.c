#include <stdio.h>
#include <stdlib.h>

int total_student, T = 0;

struct Student
{
    int name;
    int Class;
    int pref_size;
    int *pref;
};

struct M_Student
{
    int num;
    int *list;
};

struct M_Student Search(struct  Student *student, int _class, int name)
{
    struct M_Student mStd;
    mStd.num = -1;
    mStd.list = malloc(sizeof total_student * (total_student - 1));

    for (int i = 0; i < total_student; i++)
    {
//        printf("Name : %d , Class : %d\n", student[i].name , student[i].Class);
        if(student[i].name == name)
            continue;

        if (student[i].Class == _class)
        {
  //          printf("Same class %d , Name : %d\n", _class, student[i].name);
            mStd.list[++mStd.num] = student[i].name;
  //          printf("Check name : %d , index : %d\n", mStd.list[num], num);
        }
    }
    return mStd;
}

int main()
{
    scanf("%d", &total_student);

    struct Student student[total_student];
    for (int i = 0; i < total_student; i++)
    {
        student[i].name = i + 1;
        scanf("%d", &student[i].Class);

        student[i].pref = malloc(sizeof total_student * (total_student - 1));
        for (int j = 0; j < (total_student - 1); j++)
            scanf("%d", &student[i].pref[j]);
    }

/*            printf("\n");

        for (int i = 0; i < total_student; i++)
        {
            printf("%d ", student[i].Class);

            for (int j = 0; j < total_student - 1; j++)
                printf("%d ", student[i].pref[j]);
            printf("\n");
        } */



    for (int i = 0; i < total_student; i++)
    {
        struct Student aStudent = student[i];
        struct M_Student mStd = Search(student, aStudent.Class, aStudent.name);

  //      printf("Matched for %d : ", aStudent.name);
        for (int j = 0; j <= mStd.num; j++)
        {
  //          printf("%d", mStd.list[j]);
            for (int l = 0; l < (total_student - 1); l++)
            {
                if(aStudent.pref[l] == mStd.list[j])
                {
                    int item = l + 1;
                    T = (T < item) ? item : T;
                }
            }
        }
   //    printf("\n");
    }
    printf("%d\n", T);
    return 0;
}
