#include<iostream>
using namespace std;
bool isPrime(int i){
    if(i<2) return false;
    //the next all code automatically runs if it is else condition since if has return
    for(int j=2;j*j<=i;j++){
        if(i%j==0) return false;
    }
    return true;
}
int main(){
    //counting no.of prime numbers from 1 to 100
    int c=0;
    for(int i=1;i<=100;i++){
        if(isPrime(i)){
            cout<<i<<endl;
            c++;
        }
    }
    cout<<"Total Primes: "<<c<<endl;
    return 1;
}