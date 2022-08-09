#include <iostream>
using namespace std;

int main() {

    /*
    int num = 5;
    cout<<num<<endl;

    // address of Operator -> &         
    cout<<"Address of num is -> "<<&num<<endl;      //HexaDecimal form

    int *ptr = &num;
    cout<<"Address is -> "<<ptr<<endl;
    cout<<"Value is -> "<<*ptr<<endl;
    cout<<"Size of num is -> "<<sizeof(num)<<endl;
    cout<<"Size of ptr is -> "<<sizeof(ptr)<<endl;

    double d = 5.9;
    double *p = &d;
    cout<<"Address is -> "<<p<<endl;
    cout<<"Value is -> "<<*p<<endl;
    cout<<"Size of d is -> "<<sizeof(d)<<endl;
    cout<<"Size of p is -> "<<sizeof(p)<<endl;
    */


    /*    
    // pointer to int is created, and pointing to some garbage address
    int *p;
    cout<<*p<<endl;

    // pointing to null
    int *p2 = 0;
    cout<<*p2<<endl;
    */

    /*
    int i = 5;
    int *p = &i;
    cout<<p<<endl;
    cout<<*p<<endl;
    // OR
    int *q = 0;
    q = &i;
    cout<<q<<endl;
    cout<<*q<<endl;
    */


   /*
   int num = 5;
   int a = num;
   a++;
   cout<<num<<" "<<a<<endl;     //num value remains same

   int *k = &num;
   int b = *k;
   b++;
   cout<<num<<" "<<b<<endl;     //num value remains same

   int *p = &num;
   cout<<"Before -> "<<num<<endl;       // OP -> 5
   (*p)++;
   cout<<"After -> "<<num<<endl;        // OP -> 6

    // Coping a Pointer
    int *q = p;
    cout<<p <<" - "<<q<<endl;
    cout<<*p <<" - "<<*q<<endl;

    (*q)++;
    cout<<"After -> "<<num<<" "<<p<<" "<<*p<<" "<<q<<endl;
    (q)++;
    cout<<"After -> "<<num<<" "<<p<<" "<<*p<<" "<<q<<endl;
    */


    //Important Concept
    int i = 3;
    int *t = &i;
    cout<<(*t)++<<endl;
    cout<<*t<<endl;
    *t = *t + 1;
    cout<<*t<<endl;

    cout<<"Before -> "<<t<<endl;
    t = t + 1;                      // increment in address by add (according to data type), this means inr to next location
    cout<<"After -> "<<t<<endl;

}