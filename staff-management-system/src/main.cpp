/*职工管理系统*/
#include "../include/staff.h"
#include "../include/boss.h"
#include "../include/emplayee.h"
#include "../include/manager.h"
#include "../include/staffManagement.h"

int main(){
    system("chcp 65001");
    staffManagement SM;
    int index=0,temp;
    while(true){
        SM.displayMenu();
        cout<<"请输入所需序号:\n"<<endl;
        cin>>index;
        switch(index){
            case 1: //1添加职工信息
                addStaff(&book);
                cout<<"添加成功！"<<endl;
                break;
            case 2: //2显示职工信息
                if(displayStaff(&book)==-1){
                    cout<<"为空..."<<endl;
                }else{
                    cout<<"显示成功!"<<endl;
                }
                break;
            case 3: //3删除职工信息
                if(deleteStaff(&book)==-1){
                    cout<<"为空..."<<endl;
                }else{
                    cout<<"删除成功!"<<endl;
                }
                break;
            case 4: //4查找职工信息
                if(searchStaff(&book)==-1){
                    cout<<"为空..."<<endl;
                }else{
                    cout<<"查询成功!"<<endl;
                }
                break;
            case 5: //5修改职工信息
                if(updateStaff(&book)==-1){
                    cout<<"通讯录为空..."<<endl;
                }else{
                    cout<<"修改成功!"<<endl;
                }
                break;
            case 6: //6按照编号排序
                if(clearStaff(&book)==-1){
                    cout<<"通讯录为空..."<<endl;
                }else{
                    cout<<"!"<<endl;
                }
                break;
            case 7: //7清空职工信息
                if(clearStaff(&book)==-1){
                    cout<<"通讯录为空..."<<endl;
                }else{
                    cout<<"清空成功!"<<endl;
                }
                break;
            case 0: //0退出通讯录
                cout<<"欢迎下次使用！"<<endl;
                cout<<"按任意键退出...";
                cin.get();
                return 0; 
                break;
            default: //非法输入    
                cout<<"输入错误!"<<endl;
                break;
        }
        cout<<"\n\n";
    }
    return 0;
}
