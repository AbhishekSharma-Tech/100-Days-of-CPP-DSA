#include <iostream>
using namespace std;

// find element in 2D array
bool isPresent(int arr[][3], int target, int row, int col){     // need to specify col size, when passing 2D array as parameter
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            if(arr[row][col] == target){
                return 1;
            }
        }
    }
    return 0;
}


// row wise sum 
void rowSum(int arr[][3], int row, int col){     // need to specify col size, when passing 2D array as parameter
    for(int row=0; row<3; row++){
        int sum = 0;
        for(int col=0; col<3; col++){
            sum += arr[row][col];
        }
        cout<<"Row wise Sum is -> "<<sum<<endl;
    }
}

// col wise sum 
void colSum(int arr[][3], int row, int col){     // need to specify col size, when passing 2D array as parameter
    for(int col=0; col<3; col++){
        int sum = 0;
        for(int row=0; row<3; row++){
            sum += arr[row][col];
        }
        cout<<"Col wise Sum is -> "<<sum<<endl;
    }
}


// largest row sum
int largestRowSum(int arr[][3], int row, int col){
    int maxi = INT32_MIN;
    int rowIndex = -1;

    for(int row=0; row<3; row++){
        int sum = 0;
        for(int col=0; col<3; col++){
            sum += arr[row][col];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    cout<<"Maximum Sum is -> "<<maxi<<endl;
    return rowIndex;
}

int main() {
    // create 2D array
    int arr[3][3];
    // int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};  

    // taking input -> row wise
    cout<<"Enter Array elements -> "<<endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cin>>arr[row][col];
        }
    }

    // taking input -> row wise
    // for(int row=0; row<3; row++){
    //     for(int col=0; col<4; col++){
    //         cout<<arr[row][col];
    //     }
    //     cout<<endl;
    // }


    // taking input -> col wise
    // for(int col=0; col<4; col++){
    //     for(int row=0; row<3; row++){
    //         cin>>arr[row][col];
    //     }
    // }

    // taking input -> row wise
    // for(int col=0; col<3; col++){
    //     for(int row=0; row<4; row++){
    //         cout<<arr[row][col];
    //     }
    //     cout<<endl;
    // }


    // cout<<"Enter the element to find -> "<<endl;
    // int target;
    // cin>>target;

    // if(isPresent(arr, target, 3, 3)){
    //     cout<<"Element Found"<<endl;
    // }
    // else {
    //     cout<<"Not Found"<<endl;
    // }

    // rowSum(arr, 3, 3);
    // colSum(arr, 3, 3);

    int maxRow = largestRowSum(arr, 3, 3);
    cout<<"Max row is at Index -> "<<maxRow<<endl;
}





//----- Print Like a Wave -----
// vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
// {
//     vector<int> ans;
    
//     for(int col=0; col<mCols; col++){
//         if(col&1){
//             //odd Index -> Bottom to Top
//             for(int row=nRows-1; row>=0; row--){                             ans.push_back(arr[row][col]);
//             }
//         }
//         else {
//             //0 or even Index -> Top to Bottom
//             for(int row=0; row<nRows; row++){
//                 ans.push_back(arr[row][col]);
//             }
//         }
//     }
//     return ans;
// }





//----- 54. Spiral Matrix -----
// O(m*n)
// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
//         vector<int> ans;
//         int row = matrix.size();
//         int col = matrix[0].size();
        
//         int count = 0;
//         int total = row * col;
        
//         // index initialisation
//         int startRow = 0;
//         int startCol = 0;
//         int endRow = row - 1;
//         int endCol = col - 1;
        
//         while(count < total) {
            
//             // Print Starting Row
//             for(int index = startCol; count < total && index <= endCol; index++){
//                 ans.push_back(matrix[startRow][index]);
//                 count++;
//             }
//             startRow++;
            
//             // Print Ending Col
//             for(int index = startRow; count < total && index <= endRow; index++){
//                 ans.push_back(matrix[index][endCol]);
//                 count++;
//             }
//             endCol--;
            
//             // Print Ending Row
//             for(int index = endCol; count < total && index >= startCol; index--){
//                 ans.push_back(matrix[endRow][index]);
//                 count++;
//             }
//             endRow--;
            
//             // Print Starting Col
//             for(int index = endRow; count < total && index >= startRow; index--){
//                 ans.push_back(matrix[index][startCol]);
//                 count++;
//             }
//             startCol++;
//         }
//         return ans;
//     }
// };





//----- 74. Search a 2D Matrix -----
// O(log(row*col))
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
//         int row = matrix.size();
//         int col = matrix[0].size();
        
//         int start = 0;
//         int end = row*col - 1;
        
//         int mid = start + (end - start)/2;
        
//         while(start <= end) {
//             int element = matrix[mid/col][mid%col];
            
//             if(element == target){
//                 return 1;
//             }
//             if(element < target){
//                 start = mid + 1;
//             }
//             else {
//                 end = mid - 1;
//             }
//             mid = start + (end - start)/2;
//         }
//         return 0;
//     }
// };





//----- 240. Search a 2D Matrix II -----
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
//         int row = matrix.size();
//         int col = matrix[0].size();
        
//         int rowIndex = 0;
//         int colIndex = col - 1;
        
//         while(rowIndex < row && colIndex >= 0){
//             int element = matrix[rowIndex][colIndex];
            
//             if(element == target){
//                 return 1;
//             }
//             if(element < target){
//                 rowIndex++;
//             }
//             else {
//                 colIndex--;
//             }
//         }
//         return 0;
//     }
// };