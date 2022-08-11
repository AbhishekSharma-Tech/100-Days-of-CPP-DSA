#include <iostream>
using namespace std;

/*
void update(int **p2){
    // p2 = p2 + 1;

    // *p2 = *p2 + 1;

    **p2 = **p2 + 1; 
}
*/


void update(int *p) {
    *p = (*p) * 2;
}

void increment(int **p){
    ++(**p);
}



int main(){

    /*
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout<<"p -> "<<p<<endl;
    cout<<"&p -> "<<&p<<endl;
    cout<<"*p2 -> "<<*p2<<endl;

    cout<<"i -> "<<i<<endl;
    cout<<"*p -> "<<*p<<endl;
    cout<<"**p2 -> "<<**p2<<endl;

    cout<<"&i -> "<<&i<<endl;
    cout<<"p -> "<<p<<endl;
    cout<<"*p2 -> "<<*p2<<endl;

    cout<<endl<<endl;
    cout<<"Before -> "<<i<<endl;
    cout<<"Before -> "<<p<<endl;
    cout<<"Before -> "<<p2<<endl;
    update(p2);
    cout<<"After -> "<<i<<endl;
    cout<<"After -> "<<p<<endl;
    cout<<"After -> "<<p2<<endl;
    cout<<endl<<endl;
    */

    // MCQ

    /*
    int first = 8;
    int second = 18;
    int *ptr = &second;
    *ptr = 9;
    cout<<first<<" "<<second<<endl;     // 8 9
    */

    /*
    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout<<first<<endl;      // 7
    */

    /*
    int first = 8;
    int *p = &first;
    cout<<(*p)++<<" ";
    cout<<first<<endl;      // 8 9
    */

    /*
    int *p = 0;
    int first = 110;
    *p = first;
    cout<<*p<<endl;     // null    : if -> int *p = 0; then -> p = &i;
    */

    /*
    int first = 8;
    int second = 11;
    int *third = &second;
    first = *third;
    *third = *third + 2;
    cout<<first<<" "<<second<<endl;     // 11 13
    */

    /*
    float f = 12.5;
    float p = 21.5;
    float* ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout<<*ptr<<" "<<f<<" "<<p<<endl;       // 21.5 21.5 21.5
    */

    /*
    int arr[5];
    int *ptr;
    cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;      // 20 4
    */

    /*
    int arr[] = {11, 21, 13, 14};
    cout<<*(arr)<<" "<<*(arr+1)<<endl;      // 11 21
    */

    /*
    int arr[6] = {11, 12, 31};
    cout<<arr<<" "<<&arr<<endl;     // base address
    */

    /*
    int arr[6] = {11, 21, 13};
    cout<<(arr + 1)<<endl;      // base add + 1  eg. 710 + 4 = 714, address of arr[1]
    */

    /*
    int arr[6] = {11, 21, 31};
    int *p = arr;
    cout<<p[2]<<endl;       // 31           *p -> arr, p[2] -> *(p + 2)
    */

    /*
    int arr[] = {11, 12, 13, 14, 15};
    cout<<*(arr)<<" "<<*(arr + 3);      // 11 14
    */

    /*
    int arr[] = {11, 21, 31, 41};
    int *ptr = arr++;       // arr++ not possible as we are trying to increment value present in symbol table
    cout<<*ptr<<endl;       // ERROR
    */

    /*
    char ch = 'a';
    char* ptr = &ch;
    ch++;
    cout<<*ptr<<endl;       // b
    */

    /*
    char arr[] = "abcde";
    char *p = &arr[0];
    cout<<p<<endl;      // abcde
    */

    /*
    char arr[] = "abcde";
    char *p = &arr[0];
    p++;
    cout<<p<<endl;       // bcde
    */

    /*
    char str[] = "babbar";
    char *p = str;
    cout<<str[0]<<" "<<p[0]<<endl;      // b b
    */

    /*
    int i = 10;
    update(&i);
    cout<<i<<endl;      // 20
    */

    /*
    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout<<first<<" "<<second<<endl;     // 111 119
    */

    /*
    int first = 100;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);
    int *r = *q;
    ++(*r);
    cout<<first<<" "<<second<<endl;     // 102 101
    */


    int num = 110;
    int *ptr = &num;
    increment(&ptr);
    cout<<num<<endl;        // 111



}