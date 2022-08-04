// Selection Sort
// Space Complexity: O(1)
// Time Complexity: O(n^2)
// Best Case = Worst Case = O(n^2)
// Use: Small Size Array/Vector

// void selectionSort(vector<int>& arr, int n)
// {   
//     for(int i=0; i<n-1; i++){
//         int minIndex = i;
//         for(int j=i+1; j<n; j++){
//             if(arr[j] < arr[minIndex])
//                 minIndex = j;
//         }
//         swap(arr[minIndex], arr[i]);
//     }
// }