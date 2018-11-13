#ifndef Menu_h
#define Menu_h
#include "Initialization.h"
#include "MenuFun.h"
/*
        Menu.h修改历史
            1.创建Menu.h
                由陈兴利编辑，编辑时间为2018年10月16日16:45:23
            2.编写了MenuStart函数，能够做到显示菜单并且返回的功能
                由陈兴利编辑，编辑时间为2018年10月16日18:58:48

*/
//Insert your code down below
void MenuStart()
{
    int i;
    printf("————————欢迎使用炉石传说随从卡簿管理系统————————\n");
    printf("1.添加新随从\n");
    printf("2.删除原有随从\n");
    printf("3.保存文件\n");
    printf("4.查找随从\n");
    printf("5.更新随从属性\n");
    printf("6.退出程序\n");
    printf("请选择您需要进行的操作：");
    scanf("%d",&i);

    system("cls");
    switch(i)
    {
        case 1:MenuAdd();
        break;
        case 2:MenuDelete();
        break;
        case 3:MenuSaveFile();
        break;
        case 4:MenuSearch();
        break;
        case 5:MenuUpdate();
        break;
        case 6:MenuExit();
        break;
    }
}

#endif
