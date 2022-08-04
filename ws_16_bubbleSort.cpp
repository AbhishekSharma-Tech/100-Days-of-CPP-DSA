// Bubble Sort
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// Best Case: O(n)
// Worst Case: O(n^2)


// void bubbleSort(vector<int>& arr, int n)
// {   
//     for(int i=0; i<n; i++){
//         // for round 1 to n-1
        
//         for(int j=0; j<n-1; j++){
//             //process element till n-i th index
//             if(arr[j] > arr[j+1])
//                 swap(arr[j], arr[j+1]);
//         }
//     }
// }


//---------- Optimised Code ----------
// void bubbleSort(vector<int>& arr, int n)
// {   
//     for(int i=0; i<n; i++){
//         // for round 1 to n-1
        
//         bool swapped = false;
        
//         for(int j=0; j<n-1; j++){
//             //process element till n-i th index
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//                 swapped = true;
//             }   
//         }
//         if(swapped == false)
//             //already sorted
//             break;
//     }
// }

