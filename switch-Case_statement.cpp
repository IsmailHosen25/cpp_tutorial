#include<iostream>
using namespace std;
int main(){
    

    int n ;
    cout<<"Enter A number 1 to 5: "<<endl;
    cin>>n;
    // if(n==1){
    //     for(int i=11;i<=19;i++){
    //       cout<<i<<endl;
    //     }
    // }
    // else if(n==2){
    //     for(int i=20;i<=29;i++){
    //       cout<<i<<endl;
    //     }
    // }
    //  else if(n==3){
    //     for(int i=31;i<=39;i++){
    //       cout<<i<<endl;
    //     }
    // }
    //   else if(n==4){
    //     for(int i=41;i<=49;i++){
    //       cout<<i<<endl;
    //     }
    // }
    //   else if(n==5){
    //     for(int i=51;i<=59;i++){
    //       cout<<i<<endl;
    //     }
    // }
    // else{
    //     cout<<"Wron Number";
    // }


switch (n)  //this is more efficient then if/else
{
case 1 :
   for(int i=11;i<=19;i++){
          cout<<i<<endl;
        }
    break;
   case 2 :
      for(int i=20;i<=29;i++){
          cout<<i<<endl;
        }
    break;
    case 3 :
      for(int i=31;i<=39;i++){
          cout<<i<<endl;
        }
    break;
    case 4 :
      for(int i=41;i<=49;i++){
          cout<<i<<endl;
        }
    break;
    case 5 :
     for(int i=51;i<=59;i++){
          cout<<i<<endl;
        }
    break;
default:
    cout<<"Wrong";
    break;
}

    return 0;
}
