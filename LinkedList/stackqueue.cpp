#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    stack<int>s;
    queue<int>q;
    for(int i=0;i<n;i++){
        s.push(arr[i]);
        q.push(arr[i]);
    }
    cout<<"Printing queue:"<<endl;
    while(!q.empty()){
        cout << q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    cout<<"Printing stack:"<<endl;
    while(!s.empty()){
        cout<< s.top()<<" ";
        s.pop();
    }
    return 0;
}