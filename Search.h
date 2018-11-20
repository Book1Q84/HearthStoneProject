#ifndef Search_h
#define Search_h
#include "Initialization.h"
//#define true 1
//#define false 0
/*
        Search.h修改历史
            1.创建Search.h
                由陶浩编辑，编辑时间为2018年10月19日20:19:23
            2.*编辑内容*
                由*编辑者*编辑，编辑时间为*编辑完成时间*

*/
//Insert your code down below

void  Search_by_name()
{
    int i;
	char S_Name[25];//定义字符串数组，存放查找的名字
	printf("----------------------------\n");
	printf("******按照随从名查找*********\n\n\n\n");
	printf("*****请输入要查找的卡牌*****\n");
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
            printf("未找到该随从，请重试！\n\n\n");
        }
    }
}




#endif // Search_h




