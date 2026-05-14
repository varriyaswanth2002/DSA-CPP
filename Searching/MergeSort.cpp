#include<iostream>
#include<vector>
using namespace std;
//&arr means using same arr pass by reference , temp we can pass by value but reference pass is efficient

void merge(vector<int>&data,vector<int>&temp,int low,int mid,int high){
    int i=low,j=mid+1,y=0;
    while(i<=mid && j<=high){
        if(data[i]<=data[j]){
            temp[y]=data[i];
            i++;
            y++;
        }
        else{
            temp[y]=data[j];
            j++;
            y++;
        }
    }
    while(i<=mid){
        temp[y]=data[i];
        i++;
        y++;
    }
    while(j<=high){
        temp[y]=data[j];
        j++;
        y++;
    }
    for(int p=low,y=0;p<=high;p++,y++){
        data[p]=temp[y];
    }
}

void mergeSort(vector<int>&data,vector<int>&temp,int low,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    mergeSort(data,temp,low,mid);
    mergeSort(data,temp,mid+1,high);
    merge(data,temp,low,mid,high);
}

int main(){
    vector<int>data{12,14,112,113,15,19,100};
    vector<int>temp(data.size());
    mergeSort(data,temp,0,data.size()-1);
    for(auto i:data){
        cout<<i<<" ";
    }
    return 1;
}