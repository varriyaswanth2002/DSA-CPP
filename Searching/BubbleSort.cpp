#include<iostream>
using namespace std;
void BubbleSort(int a[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void PrintArray(int b[],int n){
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}
int main(){
    int arr[]={6,5,3,1,8,7,2,4};
    int n= sizeof(arr)/sizeof(int);
    BubbleSort(arr,n);
    PrintArray(arr,n);
    return 1;
}