
// Is Array Sorted
// #include <iostream>
// using namespace std;

// bool isSorted (int *arr, int size) {

//     // Base Case
//     if (size == 0 || size == 1)
//         return true;

//     if(arr[0] > arr[1])
//         return false;
//     else {
//         bool remainingPart = isSorted(arr + 1, size - 1);
//         return remainingPart;
//     }
// }

// int main() {

//     int arr[5] = {2, 4, 10, 8, 9};
//     int size = 5;

//     bool ans = isSorted (arr, size);

//     if (ans) 
//         cout<<"Sorted"<<endl;
//     else 
//         cout<<"Unsorted"<<endl;

// }




// Sum of Array
// #include <iostream>
// using namespace std;

// int getSum (int *arr, int s) {

//     // Base Case 
//     if (s == 0)
//         return 0;
//     if (s == 1)
//         return arr[0];

//     int sum = arr[0] + getSum(arr + 1, s - 1);
//     return sum;
// }

// int main() {

//     int arr[5] = {2, 4, 6, 8, 9};
//     int size = 5;

//     int sum = getSum(arr, size);
//     cout<<"Sum -> "<<sum<<endl;

// }





// Linear Search using Recursion
// #include <iostream>
// using namespace std;

// bool linearSearch (int *arr, int s, int k) {

//     // Base Case
//     if (s == 0)
//         return false;

//     if(arr[0] == k)
//         return true;
//     else {
//         bool remainingPart = linearSearch(arr + 1, s - 1, k);
//         return remainingPart;
//     }
// }

// int main() {

//     int arr[5] = {1, 3, 5, 7, 9};
//     int size = 5;
//     int key = 4;

//     bool ans = linearSearch(arr, size, key);

//     if(ans)
//         cout<<"Found"<<endl;
//     else    
//         cout<<"Not Found"<<endl;

// }






// Binary Search using Recursion
#include <iostream>
using namespace std;

bool binarySearch (int *arr, int s, int e, int k) {

    // Element not found
    if (s > e)
        return false;

    int mid = s + (e - s)/2;

    // Base Case 
    if (arr[mid] == k)
        return true;

    if(arr[mid] > k)
        return binarySearch(arr, s, mid - 1, k);
    else
        return binarySearch(arr, mid + 1, e, k);

    
}

int main() {

    int arr[5] = {1, 3, 5, 7, 9};
    int key = 4;

    cout<<"Present or Not -> "<<binarySearch(arr, 0, 5, key)<<endl;

}






// Binary Search - Code Studio Q
// int searching (int *arr, int s, int e, int k) {

//     // Element not found
//     if (s > e)
//         return -1;

//     int mid = s + (e - s)/2;

//     // Base Case 
//     if (arr[mid] == k)
//         return mid;

//     if(arr[mid] > k)
//         return searching(arr, s, mid - 1, k);
//     else
//         return searching(arr, mid + 1, e, k);
// }


// int binarySearch(int *input, int n, int val)
// {
//     int ans = searching (input, 0, n-1, val);
// }