//---------- CODESTUDIO ----------

//========== First & Last Position of an Element in Sorted Array ==========


// #include <iostream>
// using namespace std;

// int firstOccur (int arr[], int size, int key) {
//     int s = 0, e = size - 1, i = -1;
//     int mid = s + (e - s) / 2;                

//     while (s <= e) {

//         if(arr[mid] == key) {
//             i = mid;
//             e = mid - 1;
//         }
//         else if(key > arr[mid]) {
//             s = mid + 1;
//         }
//         else if(key < arr[mid]) {
//             e = mid - 1;
//         }

//         mid = s + (e - s) / 2;
//     }
//     return i;
// }

// int lastOccur (int arr[], int size, int key) {
//     int s = 0, e = size - 1, i = -1;
//     int mid = s + (e - s) / 2;                

//     while (s <= e) {

//         if(arr[mid] == key) {
//             i = mid;
//             s = mid + 1;
//         }
//         else if(key > arr[mid]) {
//             s = mid + 1;
//         }
//         else if(key < arr[mid]) {
//             e = mid - 1;
//         }

//         mid = s + (e - s) / 2;
//     }
//     return i;
// }

// int main() {
//     int even[15] = {1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 5, 7};

//     cout<<"First Occurence of Key is at Index "<<firstOccur(even, 15, 3)<<endl;
//     cout<<"Last Occurence of Key is at Index  "<<lastOccur(even, 15, 3)<<endl;

//     return 0;
// }

//---------- By using Vector ----------
// int firstOccur (vector<int>& arr, int size, int key) {
//     int s = 0, e = size - 1, i = -1;
//     int mid = s + (e - s) / 2;                

//     while (s <= e) {

//         if(arr[mid] == key) {
//             i = mid;
//             e = mid - 1;
//         }
//         else if(key > arr[mid]) {
//             s = mid + 1;
//         }
//         else if(key < arr[mid]) {
//             e = mid - 1;
//         }

//         mid = s + (e - s) / 2;
//     }
//     return i;
// }

// int lastOccur (vector<int>& arr, int size, int key) {
//     int s = 0, e = size - 1, i = -1;
//     int mid = s + (e - s) / 2;                

//     while (s <= e) {

//         if(arr[mid] == key) {
//             i = mid;
//             s = mid + 1;
//         }
//         else if(key > arr[mid]) {
//             s = mid + 1;
//         }
//         else if(key < arr[mid]) {
//             e = mid - 1;
//         }

//         mid = s + (e - s) / 2;
//     }
//     return i;
// }

// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//     // Write your code here
    
//     pair <int, int> p;
//     p.first = firstOccur(arr, n, k);
//     p.second = lastOccur(arr, n, k);
    
//     return p;
// }




//========== Total no. of occurence of a no. ==========

// #include <iostream>
// using namespace std;

// int firstOccur (int arr[], int size, int key) {
//     int s = 0, e = size - 1, i = -1;
//     int mid = s + (e - s) / 2;                

//     while (s <= e) {

//         if(arr[mid] == key) {
//             i = mid;
//             e = mid - 1;
//         }
//         else if(key > arr[mid]) {
//             s = mid + 1;
//         }
//         else if(key < arr[mid]) {
//             e = mid - 1;
//         }

//         mid = s + (e - s) / 2;
//     }
//     return i;
// }

// int lastOccur (int arr[], int size, int key) {
//     int s = 0, e = size - 1, i = -1;
//     int mid = s + (e - s) / 2;                

//     while (s <= e) {

//         if(arr[mid] == key) {
//             i = mid;
//             s = mid + 1;
//         }
//         else if(key > arr[mid]) {
//             s = mid + 1;
//         }
//         else if(key < arr[mid]) {
//             e = mid - 1;
//         }

//         mid = s + (e - s) / 2;
//     }
//     return i;
// }

// int main() {
//     int even[15] = {1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 5, 7};

//     cout<<"Total No. of Occurence of Key  "<<lastOccur(even, 15, 3) - firstOccur(even, 15, 3) + 1<<endl;

//     return 0;
// }






//---------- LEETCODE ----------

//========== 852. Peak Index in a Mountain Array ==========

// class Solution {
//     public:
//         int peakIndexInMountainArray (vector<int>& arr) {
//             int s = 0, e = arr.size() - 1;
//             int mid  = s + (e - s) / 2;

//             while (s < e) {
//                 if(arr[mid] < arr[mid + 1]) {
//                     s = mid + 1;
//                 }
//                 else {
//                     e = mid;
//                 }
//                 mid = s + (e - s) / 2;
//             }
//             return s;
//         }
// };



#include <iostream>
using namespace std;

int peakIndexInMountainArray (int arr[], int n) {
    int s = 0, e = n - 1;
    int mid  = s + (e - s) / 2;

    while (s < e) {
        if(arr[mid] < arr[mid + 1]) {
            s = mid + 1;
        }
        else {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main() {
    int mountain[10] = {1, 3, 5, 7, 9, 13, 7, 5, 3, 1};

    cout<<"Peak of the Mountain is at Index "<<peakIndexInMountainArray(mountain, 10)<<endl;
    
    return 0;
}