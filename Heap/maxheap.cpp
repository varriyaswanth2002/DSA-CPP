#include<iostream>
#include<queue>
using namespace std;
//Last stone weight problem 1046 question
int main(){
    priority_queue<int>maxHeap; //maxheap declaration
    vector<int>stones{2,7,4,1,8,1};
    for(int i=0;i<stones.size();i++){
        maxHeap.push(stones[i]);
    }
    while(maxHeap.size()>1){
        int first = maxHeap.top();
        maxHeap.pop();
        int second = maxHeap.top();
        maxHeap.pop();
        cout<<first<<" "<<second<<endl;
        if(first>second){
            maxHeap.push(first-second);
        }
    }
    cout<< maxHeap.empty()?0:maxHeap.top();
    return 0;

}