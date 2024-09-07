#include<iostream>
using namespace std;

int helper(int arr[]){
    cout<< arr[0]<<endl;
    return arr[1];
}

int main(){
int arr[2]={0,1};
cout<<helper(arr)<<endl;
return 0;
}