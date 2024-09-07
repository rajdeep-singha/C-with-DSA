// #include<iostream>
// using namespace std;
 
// int factorial(int n)
// {
//     if (n==0) return 1;
//     return factorial (n-1)*n; 
// } // recurssion
// int main(){
//     cout<<factorial(4)<<endl;
//     return 0;
// }


#include<iostream>
 using namespace std;

void solve()
{
    int x,y;
    cin>>x>>y;
    cout<<x+y<<endl;
}
int main(){
        int tc;
        cin>>tc;
        for(int i=1;i<=tc;i++)
        {
            solve();
        }
        return 0;
}


