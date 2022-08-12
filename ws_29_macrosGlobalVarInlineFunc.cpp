// Macro: A piece of code in a program that is replaced by value of macro.      eg. #define PI 3.14

// #include <iostream>
// using namespace std;

// #define PI 3.14

// int main() {

//     int r = 5;
//     // double area = 3.14 * r * r;

//     // double pi = 3.14;
//     // double area = pi * r * r;

//     double area = PI * r * r;

//     cout<<"Area -> "<<area<<endl;


// }





// Global Variables (Bad Practice): to share variable b/w functions     (Bad -> Because anyone can change it's value, i.e any func can change it's value and this change will reflect for another func too)

// Variable sharing ke liye reference variable wala concept use kro global var nhi

// #include <iostream>
// using namespace std;

// int score = 25;     // Global Variable

// void a (int& i) {       // Variable share b/w function using pass by reference
//     cout<<i<<endl;
//     cout<<score<<endl;
//     // b(i);
// }

// void b (int& i) {       // Variable share b/w function using pass by reference
//     cout<<i<<endl;
//     cout<<score<<endl;
// }

// int main() {

//     int i = 5;
//     a(i);               // Variable share b/w function using pass by reference
//     b(i);
//     cout<<score<<endl;
// }





// Inline Function: complie hone se pehle jaha-jaha inline wala func call hua hoga waha-waha vo func aa jaega
// Inline -> func body -> 1 line (compiler inline ke liye maan jaega),  2-3 line (compiler ki marzi hai maane ya na mane),  > 3 (complier bolega bhaag yaha se, treat as normal func call)
// Benifits -> No extra mem usage, no func call overhead

// #include <iostream>
// using namespace std;

// void func (int a, int b) {
//     a++;
//     b++;
//     cout<<a<<" "<<b<<endl;
// }

// // int getMax (int& a, int& b) {       // pass by value se ho rahi mem wastage ko rokne ke liye pass by reference kr diya
// //     return (a > b) ? a : b;
// // }

// inline int getMax (int& a, int& b) {       //pr yaha func call still ja rahi hai usse bachne ke liye isse inline bna denge
//     return (a > b) ? a : b;
// }

// int main() {

//     int a = 1, b = 2;
//     // func(a, b);

//     int ans = 0;

//     // if(a>b)
//     //     ans = a;
//     // else 
//     //     ans = b;

//     // OR

//     // ans = (a > b) ? a : b;       // multiple time same cheez kr rahe to function bna diya
//     ans = getMax(a, b);     // pass by value : copy bn rahi mem some what waste 
//         // ans = getMax(a, b); for inline before compile become like this    ans = (a > b) ? a : b; 
//     cout<<ans<<endl;

//     a = a + 3;
//     b = b + 1;

//     // ans = (a > b) ? a : b;
//     ans = getMax(a, b);
//     cout<<ans<<endl;

// }





// Default Arguments: hamesha right most argument se start hogi,        void print(int arr[], int n = 0, int start) -> ye error de dega,        void print(int arr[], int n = 1, int start = 0) -> ye nhi dega              right most se default arg dena start krte hai

#include <iostream>
using namespace std;

void print(int arr[], int n, int start = 0){    // start wale arg ko hamne default value dedi i.e default arg bna diya ab agr hm start ko khali chor de to vo as '0' leke work krega
    for(int i=start; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {

    int arr[5] = {1, 3, 5, 7, 9};
    int size = 5;
    print(arr, size, 2);        // 3rd arg ko optional banana hai, like if start mil gaya to uss hisab se print krdo nhi to pura array print kr do
    cout<<endl;
    print(arr, size);       // take start as '0' which we set by default

}