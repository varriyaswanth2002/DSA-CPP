#include<iostream>
using namespace std;
int main(){
    int n=4;
    int i=0;
    int j=n-1;
    int target = 17;
    int matrix[4][4]={{2,4,6,8},{5,8,11,13},{7,14,17,18},{9,15,20,30}};
    bool found = false;
    while(j>=0 && i<=n-1){
        if(matrix[i][j]==target){
            found = true;
            break;
        }
        else if (target > matrix[i][j]){
            i++;
        }
        else{
            j--;
        }
    }
    cout<<(found?"Found":"Not found");
}