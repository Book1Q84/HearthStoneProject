#ifndef Initialization_h
#define Initialization_h
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#include<windows.h>

/*
        Initialization.h�޸���ʷ
            1.����Initialization.h
                �ɳ������༭���༭ʱ��Ϊ2018��10��16��16:45:23
            2.void Menu();->void MenuStart()
                �ɳ������༭���༭ʱ��Ϊ2018��10��16��18:57:21
            3.*�༭����*
                ��*�༭��*�༭���༭ʱ��Ϊ*�༭���ʱ��*

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

/*-----------�½��ļ�------------*/
void NewFile(){

    FILE *fp=fopen("hearthstone.txt","wb");
    if(fp==NULL)
    {
        printf("�ļ�����ʧ�ܣ������´򿪳���");
    }
    fclose(fp);
}


#endif
