#ifndef Update_h
#define Update_h
#include "Initialization.h"
/*
        Update.h�޸���ʷ
            1.����Update.h
                �ɳ������༭���༭ʱ��Ϊ2018��10��16��16:45:23
            2.����Update.h
                ���պƱ༭���༭ʱ��Ϊ2018��10��23��14:26:23
*/

//Insert your code down below

//����!!!�����������������С���黻��ʯ��Ұ��
void Update()
{
    int i;
	char NAME[20];//���ڲ��ҽ�Ҫ���µ����
	char UpdateNAME[20];
	char RARITY[4];
	int COST;
	int ATTACK;
	int HEALTH;
	char RACE[10];
	char SPECIALEFFECT[10];
	printf("-------------------------\n");
	printf("****���뽫Ҫ���µ����***\n");
	fflush(stdin);
	gets(NAME);
	for(i=0;i<MAXLENTH;i++)
    {
        if(i==MAXLENTH-1&&strcmp(NAME,Minfo[i].MonsterName)!=0)
		{
			 printf("δ�ҵ�����ӣ������ԣ�\n\n\n");
		}
        if(strcmp(NAME,Minfo[i].MonsterName)==0)
        {
            fflush(stdin);
			printf("******ִ�и��²���*******\n");
			printf("******��������ָ���Ϊ:");
			gets(UpdateNAME);
			strcpy(Minfo[i].MonsterName,UpdateNAME);
			fflush(stdin);
			printf("*******����ϡ�ж�********\n");
			gets(RARITY);
			strcpy(Minfo[i].MonsterRarity,RARITY);
			fflush(stdin);
			printf("********���·���*********\n");
			scanf("%d",&COST);
			Minfo[i].MonsterCost = COST;
			fflush(stdin);
			printf("********����ս����*******\n");
			scanf("%d", &ATTACK);
			Minfo[i].MonsterAttack = ATTACK;
			fflush(stdin);
			printf("********����������*******\n");
			scanf("%d", &HEALTH);
			Minfo[i].MonsterHealth = HEALTH;
			fflush(stdin);
			printf("********��������*********\n");
			gets(RACE);
            strcpy(Minfo[i].MonsterRace,RACE);
            fflush(stdin);//�����ַ�������//Ҳ���Ƕ�һ���ַ��������������ǣ��ı䣿
			printf("**********����Ч��*******\n");
			gets(SPECIALEFFECT);
			strcpy(Minfo[i].MonsterSpecialEffect,SPECIALEFFECT);
            fflush(stdin);
			printf("Update Operation Succeed!\n");
			break;
		}

	}
}

#endif
