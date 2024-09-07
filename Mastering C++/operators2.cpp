#include<iostream>
using namespace std;
int main(){

    int num1=5;// 1010
    cout<<(num1<<1)<<endl;// ispe multiply hoga 2 se

    cout<<(num1>>1)<<endl;// ispe divide hoga 2 se
     
    int num2=8;
    cout<<(num1&num2)<<endl;// 0
    cout<<(num1|num2)<<endl;// 1101=13     

    return 0; 
}