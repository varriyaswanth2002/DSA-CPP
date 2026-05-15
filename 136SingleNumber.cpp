#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void fun1(vector<int>nums){
    int ans=0;//since any number xor zero is itself
    for(int i=0;i<nums.size();i++){
        ans = ans^nums[i];
    }
    cout<<"Single Number is:"<<ans<<endl;
}
void fun2(vector<int>nums){
    //using counter
    map<int,int>counter;
    for(int i=0;i<nums.size();i++){
        counter[nums[i]]++;
    }
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            cout<<"Single number is:"<<i;
        }
    }
}
int main(){
    vector<int>nums{4,1,2,1,2};
    fun1(nums);
    fun2(nums);
    return 1;
}