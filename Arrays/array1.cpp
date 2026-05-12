#include<iostream>
using namespace std;
int main(){
    int brr[]={1,3,2};
    int nums[4];
    nums[0]=1;
    nums[1]=2;
    nums[2]=3;
    nums[3]=4;
    for(int i=0;i<3;i++){
        cout<<brr[i]<<endl;
    }
    for(int i=0;i<3;i++){
        cout<<brr[i]+100<<endl;
        cout<<brr[i]<<endl;
    }
    int s=0;
    for(int i=0;i<3;i++){
        cin>>brr[i];
        s=s+brr[i];
    }
    cout<<s<<endl;
    return 1;
}