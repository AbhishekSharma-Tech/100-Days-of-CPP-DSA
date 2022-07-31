// Swap Alternate 
// #include <iostream>
// using namespace std;

// void printArray(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void swapAlternate(int arr[], int n) {
//     int temp;
//     for(int i=0; i<n; i += 2) {
//         if(i+1 < n){
//             swap(arr[i], arr[i+1]);
//             // temp = arr[i];
//             // arr[i] = arr[i+1];
//             // arr[i] = temp;
//         }
//     }
// }

// int main() {
//     int even[6] = {2, 9, 7, 3, 5, 2};
//     int odd[5] = {1, 5, 7, 4, 8};

//     swapAlternate(even, 6);
//     printArray(even, 6);
//     cout<<endl;
//     swapAlternate(odd, 5);
//     printArray(odd, 5);

//     return 0;
// }


// Find Unique Element
// Except one number all other appear twice, find that one number
// #include <iostream>
// using namespace std;

// void findUnique(int *arr, int n) {
//     int ans = 0;
//     for(int i=0; i<n; i++) {
//         ans =  ans ^ arr[i];
//     }
//     cout<<ans<<endl;
// }

// void getArray(int n) {
//     int arr[n];
//     for(int i=0; i<n; i++) {
//         cin>>arr[i];
//     }
//     findUnique(arr, n);
// }

// int main() {
//     int size;
//     cin>>size;
//     getArray(size);
//     return 0;
// }


// Find Duplicate
// In array of size 'n' from 1 to n-1 number are in array and only one of the number is duplicate, find duplicate
// #include <iostream>
// using namespace std;

// void findDuplicate(int *arr, int n) {
//     int ans = 0;

//     // XOR all array elements
//     for(int i=0; i<n; i++) {
//         ans =  ans ^ arr[i];
//     }

//     // XOR [1, n-1]
//     for(int i=1; i<n; i++) {
//         ans =  ans ^ i;
//     }
//     cout<<ans<<endl;
// }

// void getArray(int n) {
//     int arr[n];
//     for(int i=0; i<n; i++) {
//         cin>>arr[i];
//     }
//     findDuplicate(arr, n);
// }

// int main() {
//     int size;
//     cin>>size;
//     getArray(size);
//     return 0;
// }


// Find Intersection
// #include <iostream>
// using namespace std;

// void findIntersection(int *arr1, int *arr2, int n1, int n2) {

//     int arr[3], k=0;

//     for(int i=0; i<n1; i++){

//         int element = arr1[i];

//         for(int j=0; j<n2; j++){

//             if(arr1[i] < arr2[j])
//                 break;

//             if(element == arr2[j]){
//                 arr[k] = element;
//                 arr2[j] = 0;
//                 k++;
//                 break;
//             }
//         }
//     }

//     for(int i=0; i<3; i++) {
//         cout<<arr[i]<<" ";
//     }
// }

// int main() {
//     int arr1[7] = {1, 2, 2, 3, 5, 7, 8};
//     int arr2[4] = {2, 3, 5, 9};
//     findIntersection(arr1, arr2, 7, 4);
//     return 0;
// }


// Optimised Solution (2-Point Approach)
// void findIntersection(int *arr1, int *arr2, int n, int m) {

//     int arr[3], k=0;

//     int i = 0, j = 0;

//     while (i < n && j < m) {

//         if(arr1[i] == arr2[j]) {
//             arr[k] = arr1[i];
//             i++;
//             j++;
//             k++;
//         }
//         else if (arr1[i] < arr[j]){
//             i++;
//         }
//         else {
//             j++;
//         }
//     }

//     for(int i=0; i<3; i++) {
//         cout<<arr[i]<<" ";
//     }
// }

// int main() {
//     int arr1[7] = {1, 2, 2, 3, 5, 7, 8};
//     int arr2[4] = {2, 3, 5, 9};
//     findIntersection(arr1, arr2, 7, 4);
//     return 0;
// }



// Pair Sum

// vector<vector<int>> pairSum(vector<int> &arr, int s) {
//     vector<vector<int>> ans;

//     for(int i=0; i<arr.size(); i++) {
//         for(int j=i+1; j<arr.size(); j++) {
//             if(arr[i] + arr[j] == 5) {
//                 vector<int> temp;
//                 temp.push_back(min(arr[i], arr[j]));
//                 temp.push_back(max(arr[i], arr[j]));
//                 ans.push_back(temp);
//             }
//         }
//     }
//     sort(ans.begin(), ans.end());
//     return ans;
// }

// #include <iostream>
// using namespace std;

// void findIntersection(int *arr, int n) {

//     int a[2][2];

//     for(int i=0; i<n; i++){

//         for(int j=i+1; j<n; j++){

//             if ((arr[i] + arr[j]) == 5) {
                
//             }
//         }
//     }



//     for(int i=0; i<3; i++) {
//         cout<<arr[i]<<" ";
//     }
// }

// int main() {
//     int arr[5] = {1, 2, 4, 3, 5};
//     findIntersection(arr, 5);
//     return 0;
// }


// Triplet with Given Sum
// HW


// Sort 0  1 array

#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortArray(int arr[], int n) {
    int l = 0, r = n-1;

    while(l < r) {
        if(arr[l]==1 && arr[r]==0) {
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
        else if(arr[l]==0) {
            l++;
        }
        else {
            r--;
        }
    }
    printArray(arr, n);
}

int main() {
    int arr[10] = {1, 1, 0, 0, 0, 0, 1, 0};
    sortArray(arr, 8);
    return 0;
}