#include <iostream>
using namespace std;
int main(){
    float x,y;
    char p;
    cout<<"............PARTHIB'S SIMPLE CALCULATOR.............."<<endl;
    cout<<"Enter two numbers : "<<endl;
    cin>>x>>y;
    cout<<"Enter '+' for Addition '-' for Substraction '*' for Multiplication '/' for Division 'S' for Square '%' for Percentage"<<endl;
    cin>>p;
    if(p=='+'){
        cout<<"The Sum of the numbers of "<<x<<" and "<<y<<" is "<<x+y<<endl;
    }
    else if(p=='-'){
        cout<<"The Difference between the numbers from "<<x<<" to "<<y<<" is "<<x-y<<endl;
        cout<<"The Difference between the numbers from  "<<y<<" to "<<x<<" is "<<y-x<<endl;
    }
    else if(p=='*'){
        cout<<"The Product of the numbers of "<<x<<" and "<<y<<" is "<<x*y<<endl;
    }
    else if(p=='/'){
        cout<<"The Division of the numbers of "<<x<<" with respect to "<<y<<" is "<<x/y<<endl;
        cout<<"The Division of the numbers of "<<y<<" with respect to "<<x<<" is "<<y/x<<endl;
    }
    else if(p=='s' || p=='S'){
        cout<<"The Square of the numbers "<<x<<" and "<<y<<" are "<<x*x<<" and "<<y*y<<endl;
    }
    else if(p=='%'){
        cout<<"The Percentage of the numbers "<<x<<" and "<<y<<" are "<<x/100<<" and "<<y/100<<endl;
    }
    else{
        cout<<"You have encountered an Error !!!"<<endl;
    }
    cout<<"Program Completely Executed...."<<endl;
    return 0;
}