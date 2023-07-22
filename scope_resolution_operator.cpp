#include<iostream>
using namespace std;
int x=30; //its a global variable
int main(){
   int x=20; //its a local variable
   cout<<"its from this function: "<<x<<endl; // local variable >global variable
   cout<<"to print global variable , must use--  : : (variable name) ";
   cout<<"its global variable : "<<::x<<endl;

   ::x=100;
   cout<<"Global variable value has been chenged: "<<::x<<endl;

}