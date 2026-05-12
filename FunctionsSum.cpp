#include<iostream>
using namespace std;
int sum(int,int);
int sum(int,int,int);
int main(){
    int ans = sum(5,10);
    int ans1 = sum(3,43,34);
    cout<<ans<<endl;
    cout<<ans1<<endl;
    return 1;
}
int sum(int a, int b){
    int ans = a+b;
    return ans;
}
int sum(int a, int b,int c){
    int ans = sum(a,b);
    ans = sum(ans,c);
    return ans;
}