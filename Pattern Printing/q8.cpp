// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     // loop to print upper triangle
//  for(int line=1;line<=n;line++){
//        int no_of_chars = 2*line-1;
// // to print spaces
// int no_of_spaces=(n-line);
// for(int k=0;k<no_of_spaces;k++){
//     cout<<" ";
// }
// // to print char
//        for(int i =0;i<no_of_chars;i++){
//         char ch=(char)('A'+i);
//         cout<<ch;
//        }
//        cout<<"\n";
//     }
//     // to print lower triangle
// for (int line= n+1; line<=2*n-1;line++){
//     int no_of_spaces = (line-n); 
//     for(int k=0;k<no_of_spaces;k++){
//         cout<<" ";
//     }

//     int no_of_chars = 2*(2*n-line) - 1;
//     for(int j =0; j<no_of_chars;j++){
//         cout<<(char)('A'+j);
//     }
//     cout<<"\n";
// }
// }

#include<iostream>
  using namespace std;
  int main(){
int n,m;
cin>>n>>m;
for(int i= 1; i<=n;i++){
    for(int j=1;j<=m;j++){
    cout<<"*";
    }
    cout<<endl;
}
return 0;
  }


// #include<iostream>
//   using namespace std;
//   int main(){
//     int n,m;
//     cin>>n>>m;
//     for(int i=1;i<=n;i++){
        
//     }
// return 0;
//   }




