#include<iostream>
using namespace std;
int main(){
    bool exp1=true;
    bool exp2=false;

    cout<<(exp1&&exp2)<<endl;//False
    cout<<(exp1||exp2)<<endl;//True
    cout<<(!exp1)<<endl;//False
    return 0;
}