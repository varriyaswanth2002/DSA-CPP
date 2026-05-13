#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10];
    vector<int>vecName;
    vecName.push_back(10);
    vecName.push_back(20);
    for(int i=0;i<vecName.size();i++){
        cout<<vecName[i]<<" ";
        //vecName.at(i);
    }
    cout<<endl;
    vector<int>secondVect;
    secondVect={1,2,40,234};
    for(int i=0;i<secondVect.size();i++){
        cout<<secondVect[i]<<" ";
    }
    cout<<endl;
    cout<<secondVect.size()<<endl;
    cout<<secondVect.empty()<<endl;//empty is bool return 
    cout<<secondVect.size()<<endl;
    vector<int>ThirdVect;
    ThirdVect={34,23,13,5342,1336,222,4234};
    sort(ThirdVect.begin(),ThirdVect.end());
    for(int i=0;i<ThirdVect.size();i++){
        cout<<ThirdVect[i]<<" ";
    }
    cout<<endl;
    return 0;
}