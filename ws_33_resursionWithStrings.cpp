
//----- Reverse String -----
// #include <iostream>
// using namespace std;

// void reverse  (string& str, int i, int j) {

//     // Base Case 
//     if (i > j)
//         return ;
    
//     swap (str[i], str[j]);
//     i++;
//     j--;

//     // Recursion Call
//     reverse (str, i, j);
// }

// int main() {

//     string name = "marten";

//     reverse(name, 0, name.length() - 1);

//     cout<<"Nmae -> "<<name<<endl;

// }





// Check Palindrome
// #include <iostream>
// using namespace std;

// bool checkPalindrome (string str, int i, int j) {

//     // base case
//     if (i > j)
//         return true;

//     if(str[i] != str[j])
//         return false;
//     else {
//         // recursion call
//         return checkPalindrome(str, i+1, j-1);
//     }

// }

// int main() {

//     string str = "abcdedca";

//     bool isPalindrome =  checkPalindrome (str, 0, str.length() - 1);

//     if(isPalindrome)
//         cout<<"Palindrome"<<endl;
//     else
//         cout<<"Not Palindrome"<<endl;
// }





//  Power a^b
// #include <iostream>
// using namespace std;

// int power (int a, int b) {

//     // base case 
//     if (b == 0)
//         return 1;
//     if (b == 1)
//         return a;

//     // recursive call
//     int ans = power(a, b/2);

//     if(b % 2 == 0) {
//         // if b is even
//         return ans * ans;
//     }
//     else {
//         // if b is odd
//         return a * ans * ans;
//     }

// }

// int main() {

//     int a, b;
//     cin>>a>>b;

//     int ans = power(a, b);

//     cout<<"Power -> "<<ans<<endl;

// }





// Bubble Sort
#include <iostream>
using namespace std;

void bubbleSort (int *arr, int n) {

    // base case 
    if (n == 0 || n == 1)
        return ;

    for(int i=0; i<n-1; i++) {
        if(arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);
    }

    // recursive call
    bubbleSort(arr, n-1);

    
}

int main() {

    int arr[5] = {1, 3, 6, 2, 4};

    bubbleSort(arr, 5);

    for(int i=0; i<5; i++)
        cout<<arr[i]<<" ";

}