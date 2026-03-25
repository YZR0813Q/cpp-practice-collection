#pragma once
#include<iostream>
using namespace std;
class staff{
public:
    virtual void showInfo()=0;
    virtual void getDeptName()=0;
protected:
    int m_Id;
    string m_Name;
    int m_DeptId;
}; 