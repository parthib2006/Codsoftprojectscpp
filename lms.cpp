#include <iostream>
#include <windows.h>
using namespace std;
void printbooks(std::string books[],int bookcount){
    cout<<"Books To Read !!!"<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    for(int i=0; i<bookcount; i++){
        cout<<"Book "<<i<<" : "<<books[i]<<endl;
    }
    cout<<"-----------------------------------------------------------------"<<endl;
}

int main(){
    std::string books[100]={""};
    int bookcount;
    int option= -1;
    while(option != 0){
        cout<<"...............Welcome to the LIBRARY MANAGEMENT SYSTEM.............."<<endl;
        cout<<"1 - Enter a new book :"<<endl;
        cout<<"2 - View a book : "<<endl;
        cout<<"3 - Delete the book : "<<endl;
        cout<<"0 - Terminate the program : "<<endl;
        cout<<"4 -...Find a book..."<<endl;
         cout<<"..........ENTER AN OPTION : ..........."<<endl;
        cin>>option;
        switch(option){
            case 1: {
                cout<<"Enter the book serial no. "<<endl;
                cin>>bookcount;
                if(bookcount > 99){
                    cout<<"LIBRARY IS FULL !!!"<<endl;
                }
                else{
                    cout<<"Enter a new book with Authors Name "<<endl;
                    cin.ignore();
                    getline(cin,books[bookcount]);
                     bookcount++;
                }
                break;
            }
            case 2: {
                system("cls");
                printbooks(books ,bookcount);
                break;
            }
            case 3: {
                system("cls");
                printbooks(books ,bookcount);
                int deletebook = 0;
                cout<<"Enter the book you want to delete..."<<endl;
                cin>>deletebook;
                if(deletebook<0 || deletebook>99){
                    cout<<"You have Entered an invalid book no., Check Again!!!"<<endl;
                }
                
                for(int i=deletebook; i<bookcount; i++){
                    books[i]=books[i+1];
                    break;
                }
                bookcount -= 1;
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
