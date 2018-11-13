#ifndef SaveFile_h
#define SaveFile_h
#include "Initialization.h"
/*
        SaveFile.h修改历史
            1.创建SaveFile.h
                由陈兴利编辑，编辑时间为2018年10月16日16:45:23
            2.*编辑内容*
                由*编辑者*编辑，编辑时间为*编辑完成时间*

*/
//Insert your code down below
void SaveFile()
{
    fflush(stdin);
    char flag;
    printf("请问是否保存文件?(Y/N)\n");

    scanf("%c",&flag);
    if(flag=='Y'||flag=='y')
    {
        FILE *fp = fopen(txtpath, "w");
        if(fp==NULL)
        {
            printf("文件打开失败！");
        }
        else
        {
                for (int i = 0; i < MAXLENTH; i++)
            {
                char temp[1000];
                if(i==MAXLENTH-1)
                {
                sprintf(temp,"%s %s %d %d %d %s %s",Minfo[i].MonsterName,
                Minfo[i].MonsterRarity, Minfo[i].MonsterCost,
                Minfo[i].MonsterAttack, Minfo[i].MonsterHealth,
                Minfo[i].MonsterRace, Minfo[i].MonsterSpecialEffect);
                fputs(temp, fp);
                break;
                }
                sprintf(temp,"%s %s %d %d %d %s %s\n",Minfo[i].MonsterName,
                Minfo[i].MonsterRarity, Minfo[i].MonsterCost,
                Minfo[i].MonsterAttack, Minfo[i].MonsterHealth,
                Minfo[i].MonsterRace, Minfo[i].MonsterSpecialEffect);
                fputs(temp, fp);

            }
           // fseek(fp,0,2);
            fclose(fp);
            printf("保存成功!");
        }
    }
    else if(flag=='N'||flag=='n')
    {
        exit(0);
    }

}





#endif
