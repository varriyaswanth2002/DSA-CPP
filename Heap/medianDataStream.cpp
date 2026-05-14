//leetcode 295 problem
//we need to find median till the given data so the best is minheap,maxheap
//use minheap for small elements and max heap for big elements
#include<iostream>
#include<queue>
using namespace std;
priority_queue<int>maxHeap;
priority_queue<int,vector<int>,greater<int>>minHeap;
void addNum(int val){
    maxHeap.push(val);//push first to the maxheap
    minHeap.push(maxHeap.top());//top element of maxheap to minheap move so that now both min,max heaps are sorted with the new inserted element it can be anywhere
    maxHeap.pop();
    if(maxHeap.size()<minHeap.size()){
        maxHeap.push(minHeap.top());
        minHeap.pop();
    }
}
double findMedian(){
    if(maxHeap.size()>minHeap.size()){//they only differ by 1 size 
        return maxHeap.top();
    }
    else{
        return 0.5*((double)maxHeap.top()+(double)minHeap.top());
    }
}
int main(){
    addNum(1);
    addNum(2);
    cout<<findMedian()<<endl;
    addNum(3);
    cout<<findMedian()<<endl;
}