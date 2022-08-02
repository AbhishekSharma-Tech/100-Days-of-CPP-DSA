//========== Find Pivot Element ==========

// #include <iostream>
// using namespace std;

// int getPivot(int arr[], int n) {
//     int s = 0, e = n - 1;
//     int m = s + (e - s) / 2;
//     while (s < e) {
//         if(arr[m] >= arr[0]) {
//             s = m + 1;
//         }
//         else {
//             e = m;
//         }
//         m = s + (e - s) / 2;
//     }
//     return s;       // or return e;
// }

// int main() {
//     int arr[5] = {8, 10, 17, 1, 3};

//     cout<<"Pivot is "<<getPivot(arr, 5)<<endl;
// }


//========== Search Elements in Rotated Sorted Array ==========

// #include <iostream>
// using namespace std;

// int getPivot(vector<int>& arr, int n) {
//     int s = 0, e = n - 1;
//     int m = s + (e - s) / 2;
//     while (s < e) {
//         if(arr[m] >= arr[0]) {
//             s = m + 1;
//         }
//         else {
//             e = m;
//         }
//         m = s + (e - s) / 2;
//     }
//     return s;       // or return e;
// }

// int binarySearch (vector<int>& arr, int s, int e, int key) {
//     int start = s, end = e;
//     int mid = start + (end - start) / 2;               
//     while (start <= end) {

//         if(arr[mid] == key) {
//             return mid;
//         }

//         if(key > arr[mid]) {
//             start = mid + 1;
//         }
//         else {
//             end = mid - 1;
//         }

//         mid = start + (end - start) / 2;
//     }
//     return -1;
// }

// int findPosition(vector<int>& arr, int n, int k)
// {
//     int pivot = getPivot(arr, n);
//     if(k >= arr[pivot] && k <= arr[n-1]) {
//         return binarySearch(arr, pivot, n-1, k);
//     }
//     else {
//         return binarySearch(arr, 0, pivot-1, k);
//     }
// }



//========== Square Root using Binary Search (LeetCode Q69) ==========

// class Solution {
// public:
    
//     long long binarySearch(int x) {
//         int s = 0, e = x;
//         long long m = s + (e - s) / 2;
//         long long ans = -1;
//         while(s <= e) {
//             long long sq = m * m;
//             if(sq == x) {
//                 return m;
//             }
//             else if(sq < x) {
//                 ans = m;
//                 s = m + 1;
//             }
//             else {
//                 e = m - 1;
//             }
//             m = s + (e - s) / 2;
//         }
//         return ans;
//     }
    
    
//     int mySqrt(int x) {
//         return binarySearch(x);
//     }
// };



//========== Square Root using Binary Search (in float) ==========

#include <iostream>
using namespace std;

long long sqrtInt(int x) {
    int s = 0, e = x;
    long long m = s + (e - s) / 2;
    long long ans = -1;
    while(s <= e) {
        long long sq = m * m;
        if(sq == x) {
            return m;
        }
        else if(sq < x) {
            ans = m;
            s = m + 1;
        }
        else {
            e = m - 1;
        }
        m = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int n, int p, int tempSol) {
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<p; i++) {
        factor = factor / 10;
        for(double j=ans; j*j<n; j=j+factor) {
            ans = j;
        }
    }
    return ans;
}



int main() {
    int n;
    cout<<"Enter Number "<<endl;
    cin>>n;

    int tempSol = sqrtInt(n);

    // int precision;
    // cout<<"Enter upto how much decimal "<<endl;
    // cin>>precision;

    cout<<"Answer is "<<morePrecision(n, 5, tempSol)<<endl;

    return 0;
}