#include<iostream>
using namespace std;
float sum(int n1,int n2){
    return n1+n2;
}
float sum_of_Multiple_Number(float arr[],int n){
    int sum;
    float s=sum;
    for (int i =0;i<n;i++){
        sum+=arr[i];
    }
    return s ;

}
int main(){
    int a=10;
    int b=20;
   cout<<"Sum of Two Number: "<<sum(a,b)<<endl;
   int n;
   cout<<"Enter How much Number You want to sum: ";
   cin>>n;
   float arr[n];

   for (int i=0;i<n;i++){
    cin>>arr[i];
   }

   cout<<"Sum of Multiple Number: "<<sum_of_Multiple_Number(arr,n)<<endl;

}