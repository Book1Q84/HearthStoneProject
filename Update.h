#ifndef Update_h
#define Update_h
#include "Initialization.h"
/*
        Update.h修改历史
            1.创建Update.h
                由陈兴利编辑，编辑时间为2018年10月16日16:45:23
            2.创建Update.h
                由陶浩编辑，编辑时间为2018年10月23日14:26:23
*/

//Insert your code down below

//更新!!!覆盖整个数据例如把小精灵换成石牙野猪
void Update()
{
    int i;
	char NAME[20];//用于查找将要更新的随从
	char UpdateNAME[20];
	char RARITY[4];
	int COST;
	int ATTACK;
	int HEALTH;
	char RACE[10];
	char SPECIALEFFECT[10];
	printf("-------------------------\n");
	printf("****输入将要更新的随从***\n");
	fflush(stdin);
	gets(NAME);
	for(i=0;i<MAXLENTH;i++)
    {
        if(i==MAXLENTH-1&&strcmp(NAME,Minfo[i].MonsterName)!=0)
		{
			 printf("未找到该随从，请重试！\n\n\n");
		}
        if(strcmp(NAME,Minfo[i].MonsterName)==0)
        {
            fflush(stdin);
			printf("******执行更新操作*******\n");
			printf("******此随从名字更新为:");
			gets(UpdateNAME);
			strcpy(Minfo[i].MonsterName,UpdateNAME);
			fflush(stdin);
			printf("*******更新稀有度********\n");
			gets(RARITY);
			strcpy(Minfo[i].MonsterRarity,RARITY);
			fflush(stdin);
			printf("********更新费用*********\n");
			scanf("%d",&COST);
			Minfo[i].MonsterCost = COST;
			fflush(stdin);
			printf("********更新战斗力*******\n");
			scanf("%d", &ATTACK);
			Minfo[i].MonsterAttack = ATTACK;
			fflush(stdin);
			printf("********更新生命力*******\n");
			scanf("%d", &HEALTH);
			Minfo[i].MonsterHealth = HEALTH;
			fflush(stdin);
			printf("********更新种族*********\n");
			gets(RACE);
            strcpy(Minfo[i].MonsterRace,RACE);
            fflush(stdin);//对于字符串数组//也就是对一串字符串可以这样覆盖，改变？
			printf("**********更新效果*******\n");
			gets(SPECIALEFFECT);
			strcpy(Minfo[i].MonsterSpecialEffect,SPECIALEFFECT);
            fflush(stdin);
			printf("Update Operation Succeed!\n");
			break;
		}

	}
}

#endif
