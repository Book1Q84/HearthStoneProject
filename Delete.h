#ifndef Delete_h
#define Delete_h
#include "Initialization.h"
/*
        Delete.h�޸���ʷ
            1.����Delete.h
                �ɳ������༭���༭ʱ��Ϊ2018��10��16��16:45:23
            2.*�༭����*
                ��*�༭��*�༭���༭ʱ��Ϊ*�༭���ʱ��*

*/
//Insert your code down below
void Delete()//�β���Ҫ�ǽṹ������
{
    char MonsterInfo_name[20];
    char flag='Y';
	int i,j;
	while(flag=='y'||flag=='Y')
    {
    printf("����������Ҫɾ����ӵ�����:");
	fflush(stdin);//ˢ�±�׼���뻺������������������Ķ�������
	scanf("%s",MonsterInfo_name);
	for(i=0;i<MAXLENTH;i++)//������������ĳ���
	{
		if(strcmp(MonsterInfo_name,Minfo[i].MonsterName)==0)//����������ƺͽṹ�������е�������ͬ
		{
			for(j=i;j<MAXLENTH;j++)
				Minfo[j]=Minfo[j+1];//�Ӹ����ݿ�ʼ��ÿһ���ṹ�����齫ǰһ���ṹ�����鸲��
				MAXLENTH--;
				Show_all();
				break;
		}
		else if(i=MAXLENTH-1&&strcmp(MonsterInfo_name,Minfo[i].MonsterName)!=0)
        {
            printf("δ�ҵ���������������ԣ�\n\n");
            break;
        }

	}
        printf("�������Ƿ���Ҫ�������в�������Y/N��");
        fflush(stdin);
        scanf("%c",&flag);
    }
    printf("�޸ĳɹ�������5��֮�󣬷������˵�......");
	Sleep(5000);
	system("cls");

}

#endif
