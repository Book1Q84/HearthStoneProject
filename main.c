#include "Initialization.h"
#include "Add.h"
#include "Delete.h"
#include "Menu.h"
#include "ReadFile.h"
#include "SaveFile.h"
#include "Search.h"
#include "Update.h"
#include "MenuFun.h"
#include "Sort.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
    炉石怪物收藏簿
    小组成员：
        姓名                    学号                班级
        陈兴利（组长）      1708080102              惠普开发171
        陶浩                1708090122              惠普测试171
        徐元首              1708080130              惠普开发171
        谢金鹏              1708080128              惠普开发171
*/
/*
        main.c修改历史
            1.创建main.c
                由陈兴利编辑，编辑时间为2018年10月16日16:45:23
            2.+#include"MenuFun.h"
                由陈兴利编辑，编辑时间为2018年10月16日18:58:01
            3.

*/


int main(int argc, char **argv)
{
    ReadFile();
    MenuStart();
}
