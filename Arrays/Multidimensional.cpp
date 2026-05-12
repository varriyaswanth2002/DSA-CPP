#include<iostream>
using namespace std;
int main(){
    int score[3][4]={
        {7,8,7,9},
        {1,3,4,5},
        {33,44,22,12}
    };
    for(int i=0;i<=2;i++){
        for(int j=0;j<=3;j++){
            cout<<score[i][j]<<endl;
        }
    }
    return 0;
}