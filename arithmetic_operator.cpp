#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter two Number: ";
    cin>>num1>>num2;
    
    int sum=num1+num2;
    cout<<"Sum is "<<sum<<endl;

    int sub;
    sub=num1-num2;
    cout<<"Sub is "<<sub<<endl;

    int mul=num1*num2;
    cout<<"Mul is "<<mul<<endl;

    double div=(float)num1/num2;   //(float) num1 is means num1 type has cheanged into float
    cout<<"Div is "<<div<<endl;

    int rem=num1%num2;
    cout<<"Rem is "<<rem<<endl;



}