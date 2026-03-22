#include "../include/contact.h"
void displayMenu(){ //展示菜单
    cout<<"#####################"<<"\n";
    cout<<"#### 1添加联系人 ####"<<"\n";
    cout<<"#### 2显示联系人 ####"<<"\n";
    cout<<"#### 3删除联系人 ####"<<"\n";
    cout<<"#### 4查找联系人 ####"<<"\n";
    cout<<"#### 5修改联系人 ####"<<"\n";
    cout<<"#### 6清空联系人 ####"<<"\n";
    cout<<"#### 0退出通讯录 ####"<<"\n";
    cout<<"#####################"<<"\n"<<endl;
}
void addPerson(addressBooks *book){ //添加联系人
    if(book->m_size==MAX){  
        cout<<"通讯录已满，无法添加！"<<endl;
        exit(0);
    }
    string name,address,telephone;
    int gender,age;
    cout<<"请输入联系人姓名:"<<endl;
    cin>>name;
    book->personArray[book->m_size].m_name=name;
    cout<<"请输入联系人性别:(1--男/2--女)"<<endl;
    while(true){
        cin>>gender;
        if(gender<1||gender>2){
            cout<<"性别输入错误，请重新输入:"<<endl;
        }else{
            break;
        }
    }
    book->personArray[book->m_size].m_gender=gender;
    cout<<"请输入联系人年龄:(周岁)"<<endl;
    while(true){
        cin>>age;
        if(age>0&&age<130){
            break;
        }
        cout<<"年龄输入错误，请重新输入:"<<endl;
    }
    book->personArray[book->m_size].m_age=age;
    cout<<"请输入联系人电话:"<<endl;
    cin>>telephone;
    book->personArray[book->m_size].m_telephone=telephone;
    cout<<"请输入联系人住址:"<<endl;
    cin.ignore();
    getline(cin, address);
    book->personArray[book->m_size].m_address=address;
    book->m_size++;
}
int displayPerson(addressBooks *book){ //显示联系人
    if(book->m_size==0){  
        return -1;
    }
    for(int i=0;i<book->m_size;i++){
        cout<<book->personArray[i].m_name<<"\t";
        if(book->personArray[i].m_gender==1){
            cout<<"男 ";
        }else{
            cout<<"女 ";
        }
        cout<<book->personArray[i].m_age<<"\t";
        cout<<book->personArray[i].m_telephone<<"\t";
        cout<<book->personArray[i].m_address<<endl;
    }
    return 0;
}
int isExist(addressBooks *book){ //是否存在联系人
    cout<<"请输入联系人姓名:"<<endl;
    string name;
    cin>>name;
    for(int i=0;i<book->m_size;i++){
        if(name==book->personArray[i].m_name){
            return i;
        }
    }
    return -1;
}
int deletePerson(addressBooks *book){ //删除联系人
    if(book->m_size==0){  
        return -1;
    }
    int temp=isExist(book);
    if(temp==-1){
        cout<<"查无此人..."<<endl;
    }
    for(int i=temp;i<book->m_size;i++){
        book->personArray[i]=book->personArray[i+1];
    }
    book->m_size--;
    return 0;
}
int searchPerson(addressBooks *book){ //查找联系人
    if(book->m_size==0){  
        return -1;
    }
    int temp=isExist(book);
    if(temp==-1){
        cout<<"查无此人..."<<endl;
    }
    cout<<book->personArray[temp].m_name<<"\t";
    if(book->personArray[temp].m_gender==1){
        cout<<"男 ";
    }else{
        cout<<"女 ";
    }
    cout<<book->personArray[temp].m_age<<"\t";
    cout<<book->personArray[temp].m_telephone<<"\t";
    cout<<book->personArray[temp].m_address<<endl;
    return 0;
}
int updatePerson(addressBooks *book){ //修改联系人
    if(book->m_size==0){  
        return -1;
    }
    int temp=isExist(book);
    if(temp==-1){
        cout<<"查无此人..."<<endl;
    }
    string name,address,telephone;
    int gender,age;
    cout<<"请输入联系人姓名:"<<endl;
    cin>>name;
    book->personArray[temp].m_name=name;
    cout<<"请输入联系人性别:(1--男/2--女)"<<endl;
    while(true){
        cin>>gender;
        if(gender<1||gender>2){
            cout<<"性别输入错误，请重新输入:"<<endl;
        }else{
            break;
        }
    }
    book->personArray[temp].m_gender=gender;
    cout<<"请输入联系人年龄:(周岁)"<<endl;
    while(true){
        cin>>age;
        if(age>0&&age<130){
            break;
        }
        cout<<"年龄输入错误，请重新输入:"<<endl;
    }
    book->personArray[temp].m_age=age;
    cout<<"请输入联系人电话:"<<endl;
    cin>>telephone;
    book->personArray[temp].m_telephone=telephone;
    cout<<"请输入联系人住址:"<<endl;
    cin.ignore();
    getline(cin, address);
    book->personArray[temp].m_address=address;
    return 0;
}
int clearPerson(addressBooks *book){ //清空联系人
    if(book->m_size==0){  
        return -1;
    }
    book->m_size=0;
    return 0;
}