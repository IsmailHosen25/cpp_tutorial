#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *pi;
    pi=&a;
    cout<<"From a: "<<a<<endl;
    cout<<"From Pointer: "<<*pi<<endl;
    cout<<"From Pointer pi: "<<pi<<endl;


    int b=20;
    int sum;
    int *p1,*p2;
    p1=&a,p2=&b;
    sum=*p1+*p2;
    cout<<"Sum of A and B : "<<sum;
}