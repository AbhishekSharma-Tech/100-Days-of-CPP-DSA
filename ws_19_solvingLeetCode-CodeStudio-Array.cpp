//----- Reverse The Array -----
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> reverse(vector<int> v) {
//     int s=0, e=v.size()-1;
//     while(s<=e) {
//         swap(v[s], v[e]);
//         s++;
//         e--;
//     }
//     return v;
// }

// void print(vector<int> v) {
//     for(auto i:v) {
//         cout<<i<<" ";
//     }cout<<endl;
// }

// int main() {
//     vector<int> v;

//     v.push_back(1);
//     v.push_back(17);
//     v.push_back(9);
//     v.push_back(21);
//     v.push_back(11);

//     vector<int> ans = reverse(v);

//     print(ans);

//     return 0;
// }


// CodeStudio - Ans
// void reverseArray(vector<int> &arr , int m)
// {
// 	int s=m+1, e=arr.size()-1;
//     while(s<=e) {
//         swap(arr[s], arr[e]);
//         s++;
//         e--;
//     }
// }





//----- 88. Merge Sorted Array -----
// #include <iostream>
// using namespace std;

// void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {
//     int i = 0, j = 0, k = 0;
//     while(i<n && j<m) {
//         if(arr1[i] < arr2[j]) {
//             arr3[k++] = arr1[i++];
//         }
//         else {
//             arr3[k++] = arr2[j++];
//         }
//     }
//     // Copy Remaining Elements of Array 1
//     while(i<n) {
//         arr3[k++] = arr1[i++];
//     }

//     // Copy Remaining Elements of Array 2
//     while(j<m) {
//         arr3[k++] = arr2[j++];
//     }
// }

// void print(int arr[], int n) {
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }

// int main() {
//     int arr1[5] = {1, 3, 5, 7, 9};
//     int arr2[3] = {2, 4, 6};
//     int arr3[8] = {0};

//     merge(arr1, 5, arr2, 3, arr3);

//     print(arr3, 8);
// }





//----- 283. Move Zeroes -----
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
            // Shifting all non-zero values to left
//         int i = 0;
//         for(int j=0; j<nums.size(); j++) {
//             if(nums[j] != 0) {
//                 swap(nums[j], nums[i]);
//                 i++;
//             } 
//         }
//     }
// };