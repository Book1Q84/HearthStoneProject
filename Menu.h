#ifndef Menu_h
#define Menu_h
#include "Initialization.h"
#include "MenuFun.h"
/*
        Menu.h�޸���ʷ
            1.����Menu.h
                �ɳ������༭���༭ʱ��Ϊ2018��10��16��16:45:23
            2.��д��MenuStart�������ܹ�������ʾ�˵����ҷ��صĹ���
                �ɳ������༭���༭ʱ��Ϊ2018��10��16��18:58:48

*/
//Insert your code down below
void MenuStart()
{
    int i;
    printf("������������������ӭʹ��¯ʯ��˵��ӿ�������ϵͳ����������������\n");
    printf("1.��������\n");
    printf("2.ɾ��ԭ�����\n");
    printf("3.�����ļ�\n");
    printf("4.�������\n");
    printf("5.�����������\n");
    printf("6.�˳�����\n");
    printf("��ѡ������Ҫ���еĲ�����");
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
