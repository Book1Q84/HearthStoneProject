#ifndef Add_h
#define Add_h
#include "Initialization.h"

/*
        Add.h�޸���ʷ
            1.����Add.h
                �ɳ������༭���༭ʱ��Ϊ2018��10��16��16:45:23
            2.*�༭����*
                ����Ԫ�ױ༭���༭ʱ��Ϊ2018��10��19��18:02:12

*/
//Insert your code down below
void Add()
{

    int n = MAXLENTH;
    char ch;
    ch = 'Y';
    while(ch == 'Y'||ch=='y')
    {
        fflush(stdin);
        printf("�������%d����ӵ�����:\n",n+1);
        gets(Minfo[n].MonsterName);
        fflush(stdin);

        printf("�������%d����ӵ�ϡ�ж�:\n",n+1);
        gets(Minfo[n].MonsterRarity);
        fflush(stdin);

        printf("�������%d����ӵķ���:\n",n+1);
        scanf("%d",&Minfo[n].MonsterCost);
        fflush(stdin);

        printf("�������%d����ӵĹ�����:\n",n+1);
        scanf("%d",&Minfo[n].MonsterAttack);
        fflush(stdin);

        printf("�������%d����ӵ�Ѫ��:\n",n+1);
        scanf("%d",&Minfo[n].MonsterHealth);
        fflush(stdin);

        printf("�������%d����ӵ�����:\n",n+1);
        gets(Minfo[n].MonsterRace);
        fflush(stdin);

        printf("�������%d����ӵ�����Ч��:\n",n+1);
        gets(Minfo[n].MonsterSpecialEffect);
        printf("\n\n");
        n++;
        MAXLENTH++;
        Show_all();
        printf("\n\n");
        printf("continue?(Y/N)\n");
        scanf("%c",&ch);
        if(ch=='N'||ch=='n')
        {
            system("cls");
            break;
        }
        fflush(stdin);
        system("cls");
    }

}

#endif
