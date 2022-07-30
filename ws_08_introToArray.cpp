// #include <iostream>
// using namespace std;

// void printArray (int arr[], int size) {
//     cout<<"Printing..."<<endl;
//     for(int i=0; i<size; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// int main() {
//     // int array[10];
//     // std::fill_n(array, 10, 5);      // initialise all element to single value
//     // for(int i=0; i<10; i++){
//     //     cout<<array[i]<<endl;
//     // }

//     // Declaration
//     // int first[15];
//     // printArray(first, 15);

//     // accessing the array
//     // cout<<"Value at 13 index: "<<first[13]<<endl;
//     // cout<<"Value at 19 index: "<<first[19]<<endl;

//     // Initialising an array
//     // int second[3] = {5, 7, 11};
//     // printArray(second, 3);

//     // accessing an element
//     // cout<<"Value at 19 index: "<<second[2]<<endl;

//     // int third[15] = {2, 7};     // except 1st two loc rest initialise to '0'
//     // printArray(third, 15);

//     // int n = 15;
//     // for (int i=0; i<n; i++){
//         // cout<<third[i]<<" ";
//     // }

//     //initialising all location with 0
//     // int fourth[10] = {0};
//     // printArray(fourth, 10);
//     // int fourthSize = sizeof(fourth)/sizeof(int);
//     // cout<<"Size of Fourth is "<<fourthSize<<endl;


//     char ch[5] = {'a', 'b', 'c', 'd', 'e'};
//     cout<<ch[3]<<endl;

//     double firstDouble[5];
//     float firstFloat[7];
//     bool firstBool[9];
//     return 0;
// }

//========================================

//Minimum & Maximum of an Array
// #include <iostream>
// using namespace std;

// int getMin (int num[], int n) {
//     int mini = INT32_MAX;
//     for(int i=0; i<n; i++){
//         // if(num[i] < min){
//         //     min = num[i];
//         // }
//         mini = min(mini, num[i]);       //Predefined function for min value
//     }
//     // Return Min value
//     return mini;
// }

// int getMax (int num[], int n) {
//     int maxi = INT32_MIN;
//     for(int i=0; i<n; i++){
//         // if(num[i] > max){
//         //     max = num[i];            
//         // }
//         maxi = max(maxi, num[i]);       //Predefined function for max value
//     }
//     // Return Max value
//     return maxi;
// }

// int main() {

//     int size;
//     cin>>size;

//     int num[100];
//     for(int i=0; i<size; i++){
//         cin>>num[i];
//     }
//     cout<<"Maximum is "<<getMax(num, size)<<endl;
//     cout<<"Minimum is "<<getMin(num, size)<<endl;


//     return 0;
// }

//=========================================

// Scopes in array

// #include <iostream>
// using namespace std;

// void update(int arr[], int n) {
//     cout<<"Inside the Function: "<<endl;

//     // updating array's 1st elememt
//     arr[0] = 420;

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Back to Main function."<<endl;
// }

// int main() {

//     int arr[3] = {1, 2, 3};

//     update(arr, 3);     // here this fuction change the value of array but earliar we saw that this not happen
//     // we know array_name like "arr" also denote base address of array, means what we passing to function is address not value i.e. function get it's value from that address and at same address value will be same for both not copied i.e any change done inside func affect for main too
//     // ** while passing array note that value change for both main & func. So be cautious.

//     cout<<endl<<"Main function: "<<endl;
//     for(int i=0; i<3; i++){
//         cout<<arr[i]<<" ";
//     }


//     return 0;
// }


//===========================================

// Linear Search

// #include <iostream>
// using namespace std;

// int linearSearch (int arr[], int size, int key) {
//     for(int i=0; i<size; i++){
//         if(arr[i] == key)
//             return 1;
//     }
//     return 0;
// }

// int main() {
//     int arr[10] = {5, 7, -2, 10, 22, -5, 5, 22, 1, 0};

//     cout<<"Enter the element to search for: "<<endl;
//     int key;
//     cin>>key;

//     bool found = linearSearch(arr, 10, key);

//     if(found) {
//         cout<<"Key is Present"<<endl;
//     }
//     else {
//         cout<<"Key is Absent"<<endl;
//     }
// }

//==========================================

// Reverse an Array

#include <iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start], arr[end]);     //built-in function for swaping
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl<<endl;
}

int main() {

    int arr[6] = {1, 4, 6, 8, 19, 3};
    int brr[5] = {2, 6, 7, 9, 11};

    reverseArray(arr, 6);
    reverseArray(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);

}