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
        printf("please input %d name:\n",n+1);
        gets(Minfo[n].MonsterName);
        fflush(stdin);

        printf("please input %d Rarity:\n",n+1);
        gets(Minfo[n].MonsterRarity);
        fflush(stdin);

        printf("please input %d Cost:\n",n+1);
        scanf("%d",&Minfo[n].MonsterCost);
        fflush(stdin);

        printf("please input %d Attack:\n",n+1);
        scanf("%d",&Minfo[n].MonsterAttack);
        fflush(stdin);

        printf("please input %d Health:\n",n+1);
        scanf("%d",&Minfo[n].MonsterHealth);
        fflush(stdin);

        printf("please input %d Race:\n",n+1);
        gets(Minfo[n].MonsterRace);
        fflush(stdin);

        printf("please input %d SpecialEffect:\n",n+1);
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
