#ifndef SaveFile_h
#define SaveFile_h
#include "Initialization.h"
/*
        SaveFile.h�޸���ʷ
            1.����SaveFile.h
                �ɳ������༭���༭ʱ��Ϊ2018��10��16��16:45:23
            2.*�༭����*
                ��*�༭��*�༭���༭ʱ��Ϊ*�༭���ʱ��*

*/
//Insert your code down below
void SaveFile()
{
    fflush(stdin);
    char flag;
    printf("�����Ƿ񱣴��ļ�?(Y/N)\n");

    scanf("%c",&flag);
    if(flag=='Y'||flag=='y')
    {
        FILE *fp = fopen(txtpath, "w");
        if(fp==NULL)
        {
            printf("�ļ���ʧ�ܣ�");
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
            printf("����ɹ�!");
        }
    }
    else if(flag=='N'||flag=='n')
    {
        exit(0);
    }

}





#endif
