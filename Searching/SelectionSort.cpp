#include<iostream>
using namespace std;
//selection sort, always replace the min element to the ith index find min at j=i+1 to j<n
void SelectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }
}
void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={4,19,30,1,34,8};
    int n = sizeof(arr)/sizeof(int);
    SelectionSort(arr,n);
    PrintArray(arr,n);
    return 1;
}