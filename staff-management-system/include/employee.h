#pragma once
#include "staff.h"
class employee:public staff{
public:
    employee(int Id,string Name,int DeptId):m_Id(Id),m_Name(Name),m_DeptId(DeptId){}
    void showInfo() override{
        cout<<"职工编号:"<<m_Id<<"\t职工姓名:"<<m_Name<<"\t岗位:"<this->getDeptName()<<endl;
    }
    void getDeptName() override{
        return string("Employee");
    }
}; 