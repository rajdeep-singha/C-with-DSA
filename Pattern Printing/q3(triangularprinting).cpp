#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    for(int i;i<=n;i++){
        for(int j;j<=(n-i+1);j++){
            cout<<"*";   
 }
    }
    return 0;
}