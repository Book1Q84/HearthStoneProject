#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED
#include"Initialization.h"
void Sort()
{
    char way[30];
    printf("����������Ҫ��ʲô��������:");
    scanf("%s",way);
    int i , j;
    MONSTERINFO a;
    if(strcmp(way,"����")==0)
    {
        for(i=0;i<MAXLENTH-1;i++)
        {
            for(j=0;j<MAXLENTH-i-1;j++)//��С��������
            {
                if(Minfo[j].MonsterCost>Minfo[j+1].MonsterCost)
                {
                    a=Minfo[j];
                    Minfo[j]=Minfo[j+1];
                    Minfo[j+1]=a;
                }
            }
        }

    }
    else if
         (strcmp(way,"������")==0)
    {

            for(i=0;i<MAXLENTH-1;i++)
        {
            for(j=0;j<MAXLENTH-i-1;j++)//��С��������
            {
                if(Minfo[j].MonsterAttack>Minfo[j+1].MonsterAttack)
                {
                    a=Minfo[j];
                    Minfo[j]=Minfo[j+1];
                    Minfo[j+1]=a;
                }
            }
        }


    }
     Show_all();
     Sleep(5000);
     system("cls");
   // else  if(strcmp(way,"����ֵ")!=0)����������Ҫ�ټ�

}

#endif // SORT_H_INCLUDED
