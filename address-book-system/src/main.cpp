#include "../include/contact.h"
using namespace std;
int main(){
    system("chcp 65001");
    addressBooks book;
    book.m_size=0;
    int index=0,temp;
    while(true){
        displayMenu();
        cout<<"请输入所需序号:\n"<<endl;
        cin>>index;
        switch(index){
            case 1: //1添加联系人
                addPerson(&book);
                cout<<"添加成功！"<<endl;
                break;
            case 2: //2显示联系人
                if(displayPerson(&book)==-1){
                    cout<<"通讯录为空..."<<endl;
                }else{
                    cout<<"显示成功!"<<endl;
                }
                break;
            case 3: //3删除联系人
                if(deletePerson(&book)==-1){
                    cout<<"通讯录为空..."<<endl;
                }else{
                    cout<<"删除成功!"<<endl;
                }
                break;
            case 4: //4查找联系人
                if(searchPerson(&book)==-1){
                    cout<<"通讯录为空..."<<endl;
                }else{
                    cout<<"查询成功!"<<endl;
                }
                break;
            case 5: //5修改联系人
                if(updatePerson(&book)==-1){
                    cout<<"通讯录为空..."<<endl;
                }else{
                    cout<<"修改成功!"<<endl;
                }
                break;
            case 6: //6清空联系人
                if(clearPerson(&book)==-1){
                    cout<<"通讯录为空..."<<endl;
                }else{
                    cout<<"清空成功!"<<endl;
                }
                break;
            case 0: //0退出通讯录
                cout<<"欢迎下次使用！"<<endl;
                system("pause");
                return 0; 
                break;
            default: //非法输入    
                cout<<"输入错误!"<<endl;
                break;
        }
        cout<<"\n\n";
    }
}