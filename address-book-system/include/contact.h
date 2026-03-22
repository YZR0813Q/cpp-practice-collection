/*通讯录管理系统*/
#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#define MAX 1000
using namespace std;
struct person{ //构造联系人结构体
    string m_name;
    string m_telephone;
    string m_address;
    int m_gender;
    int m_age;
};
struct addressBooks{ //构造通讯录结构体
    person personArray[MAX];
    int m_size;
};
void displayMenu(); //展示菜单
void addPerson(addressBooks *book); //添加联系人
int displayPerson(addressBooks *book); //显示联系人
int isExist(addressBooks *book); //是否存在联系人
int deletePerson(addressBooks *book); //删除联系人
int searchPerson(addressBooks *book); //查找联系人
int updatePerson(addressBooks *book); //修改联系人
int clearPerson(addressBooks *book); //清空联系人