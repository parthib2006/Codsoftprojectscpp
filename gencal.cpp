#include<iostream>
using namespace std;
int main(){
    float a,b,c,d;
    char p,q,r;
    cout<<"............PARTHIB'S GENERAL CALCULATOR.........."<<endl;
    cout<<"CAUTION : CALCULATOR CAN CALCULATE GARBAGE VALUES IF EXTRA OR OTHER VALUES ARE NOT SUBMITTED !!!"<<endl;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"Do you want to add another number? Enter 'y' or 'Y' if you want to add more or else enter 'n' or 'N' "<<endl;
    cin>>p;
    if(p=='y' || p=='Y'){
        cout<<"Enter third number"<<endl;
        cin>>c;
        cout<<"Do you want to add another number? Enter 'y' or 'Y' if you want to add more or else enter 'n' or 'N' "<<endl;
        cin>>q;
        if (q=='y' || q=='Y')
        {
            cout<<"Enter fourth number"<<endl;
        cin>>d;
        }
        else if (q=='n' || q=='N')
        {
            cout<<"Continuing operation... Please wait "<<endl;
        }
        else {
            cout<<"an error occured... Please check previous steps again..."<<endl;
        }
    }
    else if(p=='n' || p=='N'){
        cout<<"Continuing operation... Please wait "<<endl;
        }
        else {
            cout<<"an error occured... Please check previous steps again... "<<endl;
        }
        cout<<"Enter your operation"<<endl<<"Enter '+' for Addition '-' for Substraction '*' for Multiplication '/' for Divison 'S' for Square '%' for Percentage"<<endl;
        cin>>r;
        if(r=='+'){
            cout<<"The addition of first two numbers "<<a+b<<endl;
            cout<<"The addition of next two numbers "<<b+c<<endl;
            cout<<"The addition of last two numbers "<<c+d<<endl;
            cout<<"The addition of first and last numbers "<<a+d<<endl;
            cout<<"The addition of first three numbers "<<a+b+c<<endl;
            cout<<"The addition of next three numbers "<<b+c+d<<endl;
            cout<<"The addition of first two and fourth numbers "<<a+b+d<<endl;
            cout<<"The addition of all numbers "<<a+b+c+d<<endl;
        }
        else if(r=='*'){
            cout<<"The multiplication of first two numbers "<<a*b<<endl;
            cout<<"The multiplication of next two numbers "<<b*c<<endl;
            cout<<"The multiplication of last two numbers "<<c*d<<endl;
            cout<<"The multiplication of first and last numbers "<<a*d<<endl;
            cout<<"The multiplication of first three numbers "<<a*b*c<<endl;
            cout<<"The multiplication of next three numbers "<<b*c*d<<endl;
            cout<<"The multiplication of first two and fourth numbers "<<a*b*d<<endl;
            cout<<"The multiplication of all numbers "<<a*b*c*d<<endl;
        }
        else if(r=='-'){
            cout<<"substraction from first to second "<<a-b<<endl;
            cout<<"substraction from second to third "<<b-c<<endl;
            cout<<"substraction from third to fourth "<<c-d<<endl;
            cout<<"substraction from first to third "<<a-c<<endl;
            cout<<"substraction from second to fourth "<<b-d<<endl;
        }
        else if(r=='/'){
            cout<<"divition from first to second "<<a/b<<endl;
            cout<<"divition from second to third "<<b/c<<endl;
            cout<< "divition from third to fourth "<<c/d<<endl;
            cout<<"divition from first to third "<<a/c<<endl;
            cout<<"divition from second to fourth "<<b/d<<endl;
        }
        else if(r=='s' || r=='S'){
            cout<<"square of the first number is "<<a*a<<endl;
            cout<<"square of the second number is "<<b*b<<endl;
            cout<<"square of the third number is "<<c*c<<endl;
            cout<<"square of the fourth number is "<<d*d<<endl;
        }
        else if (r=='%')
        {
            cout<<"percentage of the first number is "<<a/100<<endl;
            cout<<"percentage of the second number is "<<b/100<<endl;
            cout<<"percentage of the third number is "<<c/100<<endl;
            cout<<"percentage of the fourth number is "<<d/100<<endl;
        }
        else{
            cout<<"an error occurred... Please check previous steps again..."<<endl;
        }
        cout<<"Calculation compltely executed"<<endl;
        return 0;
    }
