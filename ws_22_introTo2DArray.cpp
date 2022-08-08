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


    cout<<"Enter the element to find -> "<<endl;
    int target;
    cin>>target;

    if(isPresent(arr, target, 3, 3)){
        cout<<"Element Found"<<endl;
    }
    else {
        cout<<"Not Found"<<endl;
    }

    rowSum(arr, 3, 3);
    colSum(arr, 3, 3);
}