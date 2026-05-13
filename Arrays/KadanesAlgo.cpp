//continuous max sum of subarray
//This code works only for +ve max sum if max sum is -ve then it wont work.
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,-8,9,10,-2,4,-20,10};
    int n=sizeof(arr)/sizeof(int);
    int currSum = arr[0];
    int maxSum = arr[0];
    for(int i=1;i<n;i++){
        if(currSum + arr[i] < 0){
            currSum = 0;
        }
        else{
            currSum = currSum + arr[i];
            if(maxSum < currSum){
                maxSum = currSum;
            }
        }
    }
    cout<<maxSum<<endl;
    return 0;
}