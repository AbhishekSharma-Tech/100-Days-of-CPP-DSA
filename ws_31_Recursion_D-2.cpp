
#include <iostream>
using namespace std;

void sayDigit (int n, string arr[]) {
    // Base Case
    if (n == 0)
        return ;

    // Processing
    int digit = n % 10;
    n = n / 10;

    // Recursive Relation
    sayDigit(n, arr);

    // Processing
    cout<<arr[digit]<<" ";
}

int main() {

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n;
    cin>>n;

    sayDigit(n, arr);
    
}





//----- 509. Fibonacci Number -----
// class Solution {
// public:
//     int fib(int n) {
        
//         if(n == 0)
//             return 0;
        
//         if(n == 1)
//             return 1;
        
//         int ans = fib(n-1) + fib(n-2);
        
//         return ans;
//     }
// };





//----- Count Ways To Reach The N-th Stairs -----
// int countDistinctWays(int nStairs) {
//     // Base Case
//     if(nStairs < 0)
//         return 0;
//     if(nStairs == 0)
//         return 1;
    
//     // Recursion Relation
//     int ans = countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);
    
//     return ans;
// }