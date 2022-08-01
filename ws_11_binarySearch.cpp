// Time Complexity -> O(log n)

#include <iostream>
using namespace std;

int binarySearch (int arr[], int size, int key) {
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;                //  mid = (start + end) / 2; : it will create problem if start = end = 2^31 - 1, means value jo hai int ki range se bahar chali jaegi,   
                                                        // Solution : mid = start + (end - start) / 2;
    while (start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        // Goto Right or Left Part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main() {
    int even[6] = {6, 9, 15, 27, 63, 72};
    int odd[5] = {11, 19, 25, 27, 33};

    int evenIndex = binarySearch(even, 6, 63);
    cout<<"Element Found at Index "<<evenIndex<<endl;

    int oddIndex = binarySearch(odd, 5, 191);
    cout<<"Element Found at Index "<<oddIndex<<endl;

    return 0;
}