#ifndef MenuFun_h
#define MenuFun_h
#include "Initialization.h"
#include "Menu.h"
/*
        MenuFun.h修改历史
            1.创建MenuFun.h
                由陈兴利编辑，编辑时间为2018年10月16日18:59:11
            2.编写了MenuAdd(),MenuDelete(),MenuSaveFile(),MenuSearch(),MenuUpdate(),MenuExit()函数,经过测试功能正常
                由陈兴利编辑，编辑时间为2018年10月16日19:00:34

*/
void MenuAdd()
{
    printf("—————————添加新卡牌界面—————————\n");
    Add();
    //system("clear");
    MenuStart();
}

void MenuDelete()
{
    printf("—————————删除原有随从界面————————\n");
    Delete();
    //system("clear");
    MenuStart();
}

void MenuSaveFile()
{
    printf("——————————保存文件界面——————————\n");
    SaveFile();
    //system("clear");
    MenuStart();
}

void MenuSearch()
{
    printf("——————————查找随从界面——————————\n");
    //这里应使用查找函数
    Search_by_name();
    //system("clear");
    MenuStart();
}

void MenuUpdate()
{
    printf("——————————更新随从属性界面——————————\n");
    //这里应使用更新函数
    Update();
    //system("clear");
    MenuStart();
}

void MenuExit()
{
    char flag;                   //判断是否需要保存，将结构体中数据存储到文件中
    printf("请问您需要保存文件吗？(Y/N)");
    getchar();
    scanf("%c",&flag);
    if(flag=='Y'||flag=='y')
    {
        SaveFile();
    }
    else if(flag=='n'||flag=='N')
    {
        printf("程序将退出......");
        Sleep(1000);
        exit(0);
    }

}
void MenuSort()
{
    printf("----------随从排序界面----------\n");
    Sort();
    MenuStart();
}
#endif
