#ifndef Add_h
#define Add_h
#include "Initialization.h"

/*
        Add.h修改历史
            1.创建Add.h
                由陈兴利编辑，编辑时间为2018年10月16日16:45:23
            2.*编辑内容*
                由徐元首编辑，编辑时间为2018年10月19日18:02:12

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
