#include<iostream>
#include<queue>
using namespace std;
//kth largest element 703 problem
void greatestK(vector<int>nums,int k){
    priority_queue<int,vector<int>,greater<int>>minHeap;
    int maxSize = k;
    for(int i=0;i<nums.size();i++){
        minHeap.push(nums[i]);
        if(minHeap.size()>maxSize){
            minHeap.pop();//wer removing the small elements till the required k
        }
    }
    //now the top element in minheap that is smallest right now is the greatest among
    cout<<minHeap.top();

}
int main(){
    vector<int>nums{4,5,6,8};
    int k=3;
    greatestK(nums,k);
    return 1;
}