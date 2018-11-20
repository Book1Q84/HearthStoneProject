#ifndef Delete_h
#define Delete_h
#include "Initialization.h"
/*
        Delete.h修改历史
            1.创建Delete.h
                由陈兴利编辑，编辑时间为2018年10月16日16:45:23
            2.*编辑内容*
                由*编辑者*编辑，编辑时间为*编辑完成时间*

*/
//Insert your code down below
void Delete()//形参需要是结构体数组
{
    char MonsterInfo_name[20];
    char flag='Y';
	int i,j;
	while(flag=='y'||flag=='Y')
    {
    printf("请输入您想要删除随从的名字:");
	fflush(stdin);//刷新标准输入缓冲区，把输出缓冲区的东西丢弃
	scanf("%s",MonsterInfo_name);
	for(i=0;i<MAXLENTH;i++)//遍历整个数组的长度
	{
		if(strcmp(MonsterInfo_name,Minfo[i].MonsterName)==0)//如果发现名称和结构体数组中的名称相同
		{
			for(j=i;j<MAXLENTH;j++)
				Minfo[j]=Minfo[j+1];//从该数据开始。每一个结构体数组将前一个结构体数组覆盖
				MAXLENTH--;
				Show_all();
				break;
		}
		else if(i=MAXLENTH-1&&strcmp(MonsterInfo_name,Minfo[i].MonsterName)!=0)
        {
            printf("未找到该随从名，请重试！\n\n");
            break;
        }

	}
        printf("请问您是否需要继续进行操作？（Y/N）");
        fflush(stdin);
        scanf("%c",&flag);
    }
    printf("修改成功！将于5秒之后，返回主菜单......");
	Sleep(5000);
	system("cls");

}

#endif
