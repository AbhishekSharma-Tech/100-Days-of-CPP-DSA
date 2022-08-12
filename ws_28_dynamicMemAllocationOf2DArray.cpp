#include <iostream>
using namespace std;

int main() {

    // For equal row & col
    // int n;
    // cin>>n;

    // // Creating a 2D Array
    // int ** arr = new int* [n];
    // for(int i=0; i<n; i++){
    //     arr[i] = new int [n];
    // }

    // // Taking Input
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // // Giving Output
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<arr[i][j]<<" ";
    //     }cout<<endl;
    // }


    // Different row & col
    int row, col;
    cin>>row>>col;

    // Creating a 2D Array
    int ** arr = new int* [row];
    for(int i=0; i<row; i++){
        arr[i] = new int [col];
    }

    // Taking Input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    // Giving Output
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    // Releasing Memory
    for(int i=0; i<row; i++){
        delete [] arr[i];
    }

    delete [] arr;
}