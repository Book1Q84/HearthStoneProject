#ifndef MenuFun_h
#define MenuFun_h
#include "Initialization.h"
#include "Menu.h"
/*
        MenuFun.h�޸���ʷ
            1.����MenuFun.h
                �ɳ������༭���༭ʱ��Ϊ2018��10��16��18:59:11
            2.��д��MenuAdd(),MenuDelete(),MenuSaveFile(),MenuSearch(),MenuUpdate(),MenuExit()����,�������Թ�������
                �ɳ������༭���༭ʱ��Ϊ2018��10��16��19:00:34

*/
void MenuAdd()
{
    printf("����������������������¿��ƽ��桪����������������\n");
    Add();
    //system("clear");
    MenuStart();
}

void MenuDelete()
{
    printf("������������������ɾ��ԭ����ӽ��桪��������������\n");
    Delete();
    //system("clear");
    MenuStart();
}

void MenuSaveFile()
{
    printf("�������������������������ļ����桪������������������\n");
    SaveFile();
    //system("clear");
    MenuStart();
}

void MenuSearch()
{
    printf("��������������������������ӽ��桪������������������\n");
    //����Ӧʹ�ò��Һ���
    Search_by_name();
    //system("clear");
    MenuStart();
}

void MenuUpdate()
{
    printf("������������������������������Խ��桪������������������\n");
    //����Ӧʹ�ø��º���
    Update();
    //system("clear");
    MenuStart();
}

void MenuExit()
{
    char flag;                   //�ж��Ƿ���Ҫ���棬���ṹ�������ݴ洢���ļ���
    printf("��������Ҫ�����ļ���(Y/N)");
    getchar();
    scanf("%c",&flag);
    if(flag=='Y'||flag=='y')
    {
        SaveFile();
    }
    else if(flag=='n'||flag=='N')
    {
        printf("�����˳�......");
        Sleep(1000);
        exit(0);
    }

}
void MenuSort()
{
    printf("----------����������----------\n");
    Sort();
    MenuStart();
}
#endif
