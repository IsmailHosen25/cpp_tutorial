#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter Your age: ";
    cin>>age;
    if(age>=18){
        cout<<"You are adult , and your age is "<<age<<endl;
    }
    else if(age<=0){
           cout<<"You are not born yet."<<endl;
    }else{
        cout<<"You are teenger, and your age is "<<age<<endl;
    }




    int a,b,c;
    cout<<"Enter 3 Number: ";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"The Max Number is "<<a<<endl;
        }
        else{
           cout<<"The max Number is "<<c<<endl;
        }
    }
    else if(b>c){
        cout<<"The max Number is "<<b<<endl;
    }
    else{
        cout<<"The max Number is "<<c<<endl;
    }

    int d;
    cout<<"Enter a number : ";
    cin>>d;
    if(d%2!=0){
        cout<<"This is a Nagitive Number.";
    }
    else{
        cout<<"This is a Positive Number.";
    }

}