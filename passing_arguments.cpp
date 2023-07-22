#include<iostream>
using namespace std;
int formal_parameter(int n){
    n=20;
    return n;
}
int original_parameter(int *n){
   *n=30;
   return *n;
}
int main(){
    int a=10;
    cout<<"a :"<<a<<endl;
    cout<<"It is from formal_paramiter function: "<<formal_parameter(a)<<endl;
    cout<<"a :"<<a<<endl;
    cout<<"It is from original_parameter function: "<<original_parameter(&a)<<endl;
    

}