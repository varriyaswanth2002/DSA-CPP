#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    char s[] = "varri yaswanth pursuing CSE at IIT madras";
    char temp[45];
    strcpy(temp,s);
    cout<<strlen(temp)<<endl;
    char s1[]="MTech!";
    strcat(s,s1);
    cout<<s;
    return 1;

}