#ifndef Search_h
#define Search_h
#include "Initialization.h"
//#define true 1
//#define false 0
/*
        Search.h�޸���ʷ
            1.����Search.h
                ���պƱ༭���༭ʱ��Ϊ2018��10��19��20:19:23
            2.*�༭����*
                ��*�༭��*�༭���༭ʱ��Ϊ*�༭���ʱ��*

*/
//Insert your code down below

void  Search_by_name()
{
    int i;
	char S_Name[25];//�����ַ������飬��Ų��ҵ�����
	printf("----------------------------\n");
	printf("******�������������*********\n\n\n\n");
	printf("*****������Ҫ���ҵĿ���*****\n");
	fflush(stdin);
	gets(S_Name);

    for(i=0;i<MAXLENTH;i++)
    {
        if(strcmp(S_Name,Minfo[i].MonsterName)==0)
        {
            Show_n(i);
            break;
        }
        if(i==MAXLENTH-1&&strcmp(S_Name,Minfo[i].MonsterName)!=0)
        {
            printf("δ�ҵ�����ӣ������ԣ�\n\n\n");
        }
    }
}




#endif // Search_h




