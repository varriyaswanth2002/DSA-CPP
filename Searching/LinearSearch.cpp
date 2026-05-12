#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;//returning the index
        }
    }
    return -1;
}
int main(){
    int arr[]={1,4,19,30,34,8};
    int n = sizeof(arr)/sizeof(int);
    cout<<linearSearch(arr,n,19)<<endl;
    return 0;
}