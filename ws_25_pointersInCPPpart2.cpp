#include <iostream>
using namespace std;

void print (int *p){
    cout<<*p<<endl;
}

void update(int *p){
    // p = p+1;
    *p = *p+1;
}

int getSum(int arr[], int n){       // int *arr or int arr[] is same...  here what paased is address not whole array
    cout<<"Size -> "<<sizeof(arr)<<endl;

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main() {
    /*
    int arr[10] = {2, 4, 6, 8, 1, 3, 5, 7, 9, 10};
    cout<<"Address of Array -> "<< arr <<endl;
    cout<<arr[0]<<endl;
    cout<<"Address of 1st block -> "<<&arr[0]<<endl;

    cout<<" *arr -> "<<*arr<<endl;
    cout<<" *arr + 1 -> "<<*arr + 1<<endl;
    cout<<" *(arr + 1) -> "<<*(arr + 1)<<endl;

    // all are same
    cout<<"arr[2] -> "<<arr[2]<<endl;
    cout<<"*(arr + 2) -> "<<*(arr + 2)<<endl;
    cout<<"2[arr] -> "<<2[arr]<<endl;
    cout<<"*(2 + arr) -> "<<*(2 + arr)<<endl;
    */

    /*
    int *p = &arr[0];
    cout<<p<<endl;
    int *q = arr;
    cout<<q<<endl;

    cout<<sizeof(&arr[0])<<endl;
    cout<<sizeof(p)<<endl;
    */

    /*
    int a[20] = {1, 2, 3, 4, 5};
    cout<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;

    int *p = &a[0];
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;

    //ERROR
    a = a + 1;

    p = p + 1;  //Ok
    */


    /*
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";
    cout<<arr<<endl;        // print address
    cout<<ch<<endl;         // print entire content

    char *c = &ch[0];
    cout<<c<<endl;          // print entire string
    */

    /*
    char temp = 'z';
    char *p = &temp;
    cout<<p<<endl;          // z? )
    */


    int v = 5;
    int *p = &v;

    print(p);

    cout<<"before -> "<<p<<" "<<*p<<endl;
    update(p);
    cout<<"after -> "<<p<<" "<<*p<<endl;

    int arr[5] = {1, 2, 3, 4, 5};
    cout<<getSum(arr, 5)<<endl;
    cout<<getSum(arr+2, 5)<<endl;



}