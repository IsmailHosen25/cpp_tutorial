#include<iostream>
using namespace std;

int linearSearch(int arr[],int n ,int key){
    for (int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int binarysearch(int arr[],int n,int key){ 

    // binary search must need sorted array

    int s=0;
    int e=n;
    while (s<=e){
         int mid=(s+e)/2;
          if(arr[mid]==key){
                return mid;
          }
          else if(arr[mid]>key){

            e=mid-1;

          }
          else{
            s=mid+1;
          }
    }
    return -1; 
}
int main(){
// int arr[5];
// arr[0]=1;
// arr[1]=2;    //first case
// arr[2]=3;
// arr[30]=4;
// arr[4]=5;
// cout<<arr[3]<<endl;

// int arr[5]={1,2,3,4,5}; //second case
// cout<<arr[3];


//input taking for arrays

int n;
cout<<"Enter a number: ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"arrays: ";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" "<<endl;
}

int k;
cout<<"check: ";
cin>>k;
cout<<linearSearch(arr,n,k)<<endl;
cout<<binarysearch(arr,n,k);
return 0;



}
