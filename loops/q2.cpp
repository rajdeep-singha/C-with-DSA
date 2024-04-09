#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    while(n>0){
        int lastdigit=n%10;
        sum+=lastdigit;
        n=n/10;// n/=10   This line updates the value of n by removing the last digit. It does this by integer division (/) by 10, effectively removing the last digit from n.
    }
    cout<<sum<<endl;
    return 0;
}