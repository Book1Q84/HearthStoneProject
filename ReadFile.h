#ifndef ReadFile_h
#define ReadFile_h
#include "Initialization.h"
/*
        ReadFile.h�޸���ʷ
            1.����ReadFile.h
                �ɳ������༭���༭ʱ��Ϊ2018��10��16��16:45:23
            2.*�༭����*
                ��*�༭��*�༭���༭ʱ��Ϊ*�༭���ʱ��*

*/
//Insert your code down blow
void ReadFile()
{
    int i=0;
    char flag;
    FILE *fp = fopen(txtpath,"r");  //�Զ����Ʒ�ʽ�򿪲�д���ļ�hearthstone.txt
    if(fp == NULL)      //�ж��Ƿ�������
    {
        printf("�ļ���ʧ�ܣ������Ƿ���Ҫ����hearthstone.txt�ļ�����Y/N��\n");
        scanf("%c",&flag);
        if(flag=='Y'||flag=='y')
        {
            NewFile();
            printf("1");
        }
        else if(flag=='N'||flag=='n')
        {
            exit(0);
        }
    }
    //printf("1");
    while(!feof(fp)){
        fscanf(fp,"%s %s %d %d %d %s %s",Minfo[i].MonsterName,
            Minfo[i].MonsterRarity, &Minfo[i].MonsterCost,
           &Minfo[i].MonsterAttack, &Minfo[i].MonsterHealth,
            Minfo[i].MonsterRace, Minfo[i].MonsterSpecialEffect);
            i++;
    }
   // printf("%d",i);
    fclose(fp);
    MAXLENTH=i;
}

    void Show_n(int i)
    {
        printf("%-10s\t%s\t%d\t%d\t%d\t%s\t%s\t\n",Minfo[i].MonsterName,
            Minfo[i].MonsterRarity, Minfo[i].MonsterCost,
           Minfo[i].MonsterAttack, Minfo[i].MonsterHealth,
            Minfo[i].MonsterRace, Minfo[i].MonsterSpecialEffect);
    }

    void Show_all()

    {
        int i;
        for(i=0;i<MAXLENTH;i++)
        {
            printf("%-10s\t%s\t%d\t%d\t%d\t%s\t%s\t\n",Minfo[i].MonsterName,
                Minfo[i].MonsterRarity, Minfo[i].MonsterCost,
                Minfo[i].MonsterAttack, Minfo[i].MonsterHealth,
                Minfo[i].MonsterRace, Minfo[i].MonsterSpecialEffect);
        }
    }





#endif
