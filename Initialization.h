#ifndef Initialization_h
#define Initialization_h
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#include<windows.h>

/*
        Initialization.h修改历史
            1.创建Initialization.h
                由陈兴利编辑，编辑时间为2018年10月16日16:45:23
            2.void Menu();->void MenuStart()
                由陈兴利编辑，编辑时间为2018年10月16日18:57:21
            3.*编辑内容*
                由*编辑者*编辑，编辑时间为*编辑完成时间*

*/
#define MaxiumCard 100
typedef struct MonsterInfo
{
    char MonsterName[12];
    char MonsterRarity[20];
    int MonsterCost;
    int MonsterAttack;
    int MonsterHealth;
    char MonsterRace[10];
    char MonsterSpecialEffect[100];
}MONSTERINFO;
MONSTERINFO Minfo[MaxiumCard];
int MAXLENTH=0;
const char *txtpath = "\\\\Mac\\Home\\Documents\\HearthStone\\HearthStone\\hearthstone.txt";

/*-----------新建文件------------*/
void NewFile(){

    FILE *fp=fopen("hearthstone.txt","wb");
    if(fp==NULL)
    {
        printf("文件创建失败！请重新打开程序！");
    }
    fclose(fp);
}


#endif
