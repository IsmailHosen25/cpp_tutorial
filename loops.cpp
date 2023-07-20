#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int i=1;
    for(i;i<=a;i++){
       cout<<"I Love You"<<endl;
    }

    cout<<"From While loop"<<endl;
    int c=1;
    while(c<=a){
        cout<<"I Love You"<<endl;
        c+=1;
    }

    cout<<"This is from do While loop"<<endl;
    int b=1;
    do{
        cout<<"I Love You"<<endl;
        b+=1;
    }while(b<=a);

    
}