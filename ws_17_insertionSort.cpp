// Insertion Sort
// Why? : Adaptable, Stable, Usefull for small array and for partially sorted array
// Time Complexity: O(n^2)
// Best Case: O(n)
// Worst Case: O(n^2)


// void insertionSort(int n, vector<int> &arr){
//     for(int i=1; i<n; i++){
//         int temp = arr[i];
//         int j=i-1;
//         for(; j>=0; j--){
//             if(arr[j] > temp){
//                 arr[j+1] = arr[j];
//             }
//             else {
//                 break;
//             }
//         }
//         arr[j+1] = temp;
//     }
// }