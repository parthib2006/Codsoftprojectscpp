#include <iostream>
using namespace std;
int main(){
    int guess,num,count=0;
    srand(time(0));
    num=rand()%100+1;
    cout<<"Welcome to number guessing game. Here you have 10 chances to guess a number that lies between 00 to 99. Start guessing."<<endl;
    cout<<"Remember your number of tries will be counted ! "<<endl;
    cout<<"Enter your guess. TRY !"<<endl;
    for(int tries=1 ; tries<= 10; tries++){
       cin>>guess;
       count=tries;
        if(guess>num){
        cout<<"Your guess is larger than the number"<<endl;
    }
    else if(guess<num){
        cout<<"Your guess is smaller than the number"<<endl;
    }
    else if(guess==num){
        cout<<"You corrected the number"<<endl;
        break;
    }
    else{
        break;
    }
    }
    cout<<"The number you have Tried "<<count<<endl;
return 0;
}