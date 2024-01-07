// main concept of pattern printing is relate the number of rows/columns with the variety of pattern we want to get

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=(n-1);j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<j;
    }
    for(int j=(i-1);j>=1;j--){
        cout<<j;
    }
    cout<<endl;
}

return 0;
}

