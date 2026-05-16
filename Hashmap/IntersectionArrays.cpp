#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums1{4,9,5};
    vector<int>nums2{9,4,9,8,4};
    map<int,int>counter;
    for(int i=0;i<nums1.size();i++){
        counter[nums1[i]]++;
    }
    map<int,int>ansmap;
    for(int i=0;i<nums2.size();i++){
        if(counter[nums2[i]]>0){
            ansmap[nums2[i]]=1;
        }
    }
    vector<int>result;
    for(int i=0;i<nums2.size();i++){
        if(ansmap[nums2[i]]==1){
            result.push_back(nums2[i]);
            ansmap[nums2[i]]=0;
        }
    }
    for(auto x:result) cout<<x<<" ";
    return 1;
}