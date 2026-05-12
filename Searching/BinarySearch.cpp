#include<iostream>
using namespace std;
int BinarySearch(int a[],int size,int target){
    int low = 0;
    int high = size-1;
    while(low<=high){
        int middle = (low+high)/2;
        if(a[middle]==target){
            return middle;
        }
        else if(a[middle]>target){
            high=middle-1;
        }
        else{
            low = middle+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,10,32, 43,54,65,67,77,80};
    int n = sizeof(arr)/sizeof(int);
    cout<<BinarySearch(arr,n,77)<<endl;
    return 1;
}