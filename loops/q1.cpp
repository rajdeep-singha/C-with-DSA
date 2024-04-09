#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n; //710

    int digits = 0;
    while(n>0){
        digits++;// 1 2 3
        n=n/10; // 71 7 0
    }
    cout<<digits<<endl;
    return 0;
}