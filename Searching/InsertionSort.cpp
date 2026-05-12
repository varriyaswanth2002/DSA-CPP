#include<iostream>
using namespace std;
//from index 1 element replace it at correct position to the left sorted array, leftside is sorted

void InsertionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            int temp = arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
}
void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={6,5,3,1,8,7,2,4};
    int n= sizeof(arr)/sizeof(int);
    InsertionSort(arr,n);
    PrintArray(arr,n);
    return 1;
}