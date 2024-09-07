// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=m; j++){
//             if(i==1|| i==n){
//                 cout<<"*";
//             }
//             else{
//                 if(j==1 || j==m)
//                 cout<<"*";
//                 else{
//                     cout<<" ";
//                 }
//             }
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     cout<<"Hello, "<<s<<endl;
    
// }

// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int N;
//     cin >> N; 
    
//     vector<int> numbers(N);
    
//     for (int i = 0; i < N; ++i) {
//         cin >> numbers[i];
//     }
    
//     cout << "N: " << N << endl;
//     cout << "Numbers: ";
//     for (int num : numbers) {
//         cout << num << " ";
    

//  int even_count = 0, odd_count = 0, positive_count = 0, negative_count = 0;
    

//     for (int num : numbers) {
//         if (num % 2 == 0) {
//             even_count++;
//         } else {
//             odd_count++;
//         }
//     if (num > 0) {
//             positive_count++;
//         } else if (num < 0) {
//             negative_count++;
//         }
// }
//     cout << "Even: " << even_count << endl;
//     cout << "Odd: " << odd_count << endl;
//     cout << "Positive: " << positive_count << endl;
//     cout << "Negative: " << negative_count << endl;
    
    
//     return 0;
// }



// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int N;
//     cin >> N; 
    
//     vector<int> numbers(N);
    
//     for (int i = 0; i < N; ++i) {
//         cin >> numbers[i];
//     }
    
//     cout << "N: " << N << endl;
//     cout << "Numbers: ";
//     for (int num : numbers) {
//         cout << num << " ";


//         int even_count = 0, odd_count = 0, positive_count = 0, negative_count = 0;
//         // Count even and odd numbers
//         if (num % 2 == 0) {
//             even_count++;
//         } else {
//             odd_count++;
//         }
        
//         // Count positive and negative numbers
//         if (num > 0) {
//             positive_count++;
//         } else if (num < 0) {
//             negative_count++;
//         }
//     }
    

//     // Print the counts
//     cout << "Even: " << even_count << endl;
//     cout << "Odd: " << odd_count << endl;
//     cout << "Positive: " << positive_count << endl;
//     cout << "Negative: " << negative_count << endl;
    
//     return 0;
// }


// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int N;
//     cin >> N; 
    
//     vector<int> numbers(N);
    
//     for (int i = 0; i < N; ++i) {
//         cin >> numbers[i];
//     }
    
//     // cout << "N: " << N << endl;
//     // cout << "Numbers: ";
//     // for (int num : numbers) {
//     //     cout << num << " ";
//     // }

//  int even_count = 0, odd_count = 0, positive_count = 0, negative_count = 0;
    

//     for (int num : numbers) {
//         if (num % 2 == 0) {
//             even_count++;
//         } else {
//             odd_count++;
//         }
//     if (num > 0) {
//             positive_count++;
//         } else if (num < 0) {
//             negative_count++;
//         }
// }
//     cout << "Even: " << even_count << endl;
//     cout << "Odd: " << odd_count << endl;
//     cout << "Positive: " << positive_count << endl;
//     cout << "Negative: " << negative_count << endl;
    
    
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int a;
    long long b;
    char c;
    float d;
    double e;
    cin>> a  >>  b >> c >>  d  >> e;
  cout << a << endl << b << endl << c << endl << d << endl << e << endl;


    return 0;
}