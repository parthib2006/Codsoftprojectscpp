#include <iostream>
#include <windows.h>
using namespace std;
void printtasks(std::string tasks[] ,int taskcount){
    cout<<"Tasks To Do !!!"<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    for(int i=0; i<taskcount; i++){
        cout<<"Task "<<i<<" : "<<tasks[i]<<endl;
    }
    cout<<"-----------------------------------------------------------------"<<endl;
}

int main(){
    std::string tasks[10]={""};
    int taskcount;
    int option= -1;
    while(option != 0){
        cout<<"...............Welcome to the TO DO LIST.............."<<endl;
        cout<<"1 - Enter a new task :"<<endl;
        cout<<"2 - View a task : "<<endl;
        cout<<"3 - Delete the task : "<<endl;
        cout<<"0 - Terminate the program : "<<endl;
         cout<<"..........ENTER AN OPTION : ..........."<<endl;
        cin>>option;
        switch(option){
            case 1: {
                cout<<"Enter the task no. "<<endl;
                cin>>taskcount;
                if(taskcount > 9){
                    cout<<"TASK LIST IS FULL !!!"<<endl;
                }
                else{
                    cout<<"Enter a new task !"<<endl;
                    cin.ignore();
                    getline(cin,tasks[taskcount]);
                    taskcount++;
                }
                break;
            }
            case 2: {
                system("cls");
                printtasks(tasks ,taskcount);
                break;
            }
            case 3: {
                system("cls");
                printtasks(tasks ,taskcount);
                int deletetask = 0;
                cout<<"Enter the task you want to delete..."<<endl;
                cin>>deletetask;
                if(deletetask<0 || deletetask>9){
                    cout<<"You have Entered an invalid task no., Check Again!!!"<<endl;
                }
                
                for(int i=deletetask; i<taskcount; i++){
                    tasks[i]=tasks[i+1];
                    break;
                }
                taskcount -= 1;
            }
            case 0: {
                cout<<"Termination is in progress........."<<endl;
                break;
                default:
                cout<<"You have entered an invalid value !!!"<<endl;
            }
        }

    }
    return 0;
}
