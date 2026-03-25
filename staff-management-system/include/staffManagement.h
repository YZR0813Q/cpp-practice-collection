#pragma once
#include<iostream>
using namespace std;
#include "staff.h"
class staffManagement{
public:
    staffManagement(){
        m_staffTotal=0;
        m_staffArray=nullptr;
    }
    ~staffManagement(){

    }
protected:
    int m_staffTotal;
    stuff **m_staffArray;
}; 

void displayMenu();
void addStaff();
void deleteStaff();
void displayStaff();
void findStaff();
void updateStaff();
void sortStaff();
void clearStaff();