//print an matrix or 2D array where allocation is in spiral
#include<iostream>
using namespace std;
int main(){
    int arr[100][100];
    int i=0,j=0;
    int counter=1;
    int n=5;
    int direction = 1;
    while(counter<=n*n){
        arr[i][j]=counter;
        if(direction==1){
            if(j==n-1 || arr[i][j+1]>0){
                direction=2;
                i++;
            }
            else{
                j++;
            }
        }
        else if(direction==2){
            if(i==n-1 || arr[i+1][j]>0){
                direction = 3;
                j--;
            }
            else{
                i++;
            }
        }
        else if(direction==3){
            if(j==0 || arr[i][j-1]>0){
                direction=4;
                i--;
            }
            else{
                j--;
            }
        }
        else{
            if(i==0 || arr[i-1][j]>0){
                direction=1;
                j++;
            }
            else{
                i--;
            }
        }
        counter++;
    }
    //print matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}