#include<iostream>
 using namespace std;

// int* helper(){
//     int a[]= {0,1,2};
//     return a;
// }
// int main(){
//     int *a=helper();
//     cout<<a[1]<<endl;
//     return 0;
// }





// The array a is a local variable to the function helper(). When helper() returns, a goes out of scope and the memory allocated for it is no longer valid. Therefore, the pointer a in main() will point to a memory location that may no longer hold the intended data.

// To fix this problem, you have a few options:

// Dynamic Allocation:
// Allocate the array dynamically using new so that the memory remains valid even after the function returns.


// int* helper(){
//     int* a = new int[3]{0, 1, 2};
//     return a;
// }

// int main(){
//     int *a = helper();
//     cout << a[1] << endl;
//     delete[] a; // Don't forget to free the allocated memory
//     return 0;
//  }
// Static Variable:
// Use a static local variable so that it retains its value and memory address after the function returns.



int* helper(){
    static int a[] = {0, 1, 2};
    return a;
}

int main(){
    int *a = helper();
    cout << a[1] << endl;
    return 0;
}
// Use std::vector:
// Utilize the C++ Standard Library's std::vector which manages its own memory.




/*#include <vector>
std::vector<int> helper(){
    return {0, 1, 2};
}

int main(){
    std::vector<int> a = helper();
    cout << a[1] << endl;
    return 0;
}*/
// Each approach has its own use case and implications:

// Dynamic Allocation: Flexible but requires manual memory management (new and delete).
// Static Variable: Simple but not thread-safe and retains the same memory across multiple function calls.
// std::vector: Safe and convenient with automatic memory management, ideal for modern C++.
// Choose the approach that best fits your needs.






