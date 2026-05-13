//This is easy or less TC to find primes 
//if a number is not prime then it is divisble by a number <= root(number)
#include<iostream>
#include<vector>
using namespace std;
void soe(int n){
    vector<int>arr(n+1,0);
    for(int i=2;i*i<=n;i++){
        if(arr[i]==0){
            for(int j=2*i;j<=n;j+=i){ 
                arr[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(arr[i]==0){
            cout<<i<<" ";
        }
    }

}
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    soe(n);   
}