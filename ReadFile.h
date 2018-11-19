#ifndef ReadFile_h
#define ReadFile_h
#include "Initialization.h"
/*
        ReadFile.h修改历史
            1.创建ReadFile.h
                由陈兴利编辑，编辑时间为2018年10月16日16:45:23
            2.*编辑内容*
                由*编辑者*编辑，编辑时间为*编辑完成时间*

*/
//Insert your code down blow
void ReadFile()
{
    int i=0;
    char flag;
    FILE *fp = fopen(txtpath,"r");  //以二进制方式打开并写入文件hearthstone.txt
    if(fp == NULL)      //判断是否正常打开
    {
        printf("文件打开失败！请问是否需要创建hearthstone.txt文件？（Y/N）\n");
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
