 #include<iostream>
using namespace std;
int main(){
    int n;
    int factorial = 1;
    cout<< "Enter a positive number";
    cin>>n;
    if(n<0)
        cout<<"Error!";
        else{
          for(int i=1;i<=n;++i){
            factorial*=i;
            cout<<factorial<<endl;
        }     
          

          }  
               
    return 0;
} 

/* #include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;

  int factorial=1;
  for(int i=1;i<=n;i++)
}
 */
