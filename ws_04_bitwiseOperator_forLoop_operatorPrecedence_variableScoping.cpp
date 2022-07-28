#include <iostream>
using namespace std;

int main() {

    //========== Bitwise Operators ==========
    // int a = 4;
    // int b = 6;

    // cout<<"a&b: "<<(a&b)<<endl;
    // cout<<"a|b: "<<(a|b)<<endl;
    // cout<<"~a: "<<~a<<endl;
    // cout<<"a^b: "<<(a^b)<<endl;

    //========== Left Shift(<<) & Right Shift(>>) ==========
    // cout<<(17>>1)<<endl;
    // cout<<(17>>2)<<endl;
    // cout<<(19<<1)<<endl;
    // cout<<(21<<2)<<endl;

    //========== Pre & Post - Inr & Dcr ==========
    // int i = 7;
    // cout<< (++i) <<endl;    //8 , i = 8
    // cout<< (i++) <<endl;    //8 , i = 9
    // cout<< (i--) <<endl;    //9 , i = 8
    // cout<< (--i) <<endl;    //7 , i = 7

    //----- HW -----
    // Q1
    // int a, b = 1;
    // a = 10;
    // if(++a)     //increment 'a' then check if 'a' is not equal to zero
    //     cout<<b;
    // else
    //     cout<<++b;

    // Q2
    // int a = 1, b = 2;
    // if(a-- > 0 && ++b > 2)
    //     cout<< "Stage1 - Inside If" <<endl;
    // else
    //     cout<< "Stage2 - Inside else"<<endl;
    // cout<<a<<" "<<b<<endl;

    // Q3
    // int num = 3;
    // cout<< (25 * (++num)) <<endl;

    // Q4
    // int a = 1;
    // int b = a++;
    // int c = ++a;
    // cout<<b<<"\n"<<c;

    //========== For Loop ==========
    // int n;
    // cout<<"Enter value of n: "<<endl;
    // cin>>n;
    // cout<<"Count 1 to n: "<<endl;
    // for(int i=1; i<=n; i++){
    //     cout<<i<<endl;
    // }

    // int i=1;
    // for(; i<=n; i++){       //Run fine: initialisation not in for loop
    //     cout<<i<<endl;
    // }

    // int i=1;
    // for(; i<=n; ){       //Run fine: updation not in for loop
    //     cout<<i<<endl;
    //     i++;
    // }

    // int i=1;         //Condition not in For loop
    // for(; ; ){       //Infinite loop as this loop don't know when to stop
    //     if(i<=n)
    //         cout<<i<<endl;      //print count 1 to n after that infinite loop print garbage value
    //     i++;
    // }

    // int i=1;
    // for(; ; ){       //Run fine
    //     if(i<=n)
    //         cout<<i<<endl;      
    //     else
    //         break;      //terminate or exit from current loop
    //     i++;
    // }

    // for (int a=0, b=1; a>=0 && b>=1; a--, b--){     //Multiple initialisation, condition & updation
    //     cout<<a<<" "<<b<<endl;
    // }

    // for(int i=1; i<=5; ++i)     //Code Flow: Initialisation -> Condition -> Body -> Updation
    //     cout<<i<<endl;
    
    // Sum of N numbers
    // int n, sum = 0;
    // cout<<"Enter value of n: "<<endl;
    // cin>>n;
    // for(int i = 1; i<=n; i++)
    //     sum += i;
    // cout<<"Sum is: "<<sum<<endl;

    // Fibonacci Series
    // int a = 0, b = 1, sum = 0;
    // cout<<a<<"\n"<<b<<endl;
    // for(int i=1; i<=10; i++){
    //     sum = a + b;
    //     cout<<sum<<endl;
    //     a = b;
    //     b = sum;
    // }
    
    // Prime Number
    // int n;
    // cout<<"Number: "<<endl;
    // cin>>n; 
    // bool isPrime = 1;
    // for(int i=2; i<n; i++){
    //     if(n%i == 0){
    //         cout<<"Not a Prime Number"<<endl;
    //         isPrime = 0;
    //         break;
    //     }
    // }
    // if(isPrime == 1)
    //     cout<<"Prime Number"<<endl;

    // Continue
    // for(int i=1; i<=5; i++){
    //     cout<<"Hi"<<endl;
    //     cout<<"Hey"<<endl;
    //     continue;
    //     cout<<"Unreachable Line"<<endl;
    // }

    //----- HW -----
    // Q1
    // for(int i=0; i<=5; i++){        // Ans: 0 2 4
    //     cout<<i<<" ";
    //     i++;
    // }

    // Q2
    // for(int i=0; i<=15; i+=2){
    //     cout<<i<<" ";
    //     if(i&1)     // 0000 & 0001 = 0000 (0-false), 0011 & 0001 = 0001 (1-true), 0101 & 0001 = 0001 (1-true)
    //         continue;
    //     i++;
    // }

    // Q3
    // for(int i=0; i<5; i++){
    //     for(int j=1; j<=5; j++){
    //         cout<<i<<" "<<j<<endl;
    //     }
    // }

    //========== Variable & Scope ==========
    // int a = 3;      // for main() func block
    // cout<<a<<endl;      // 3

    // if(true){
    //     int a = 5;      // Block variable for if block
    //     cout<<a<<endl;  // 5
    //     int b = 7;
    // }
    // // cout<<b<<endl;      // Error
    // int b = 5;
    // cout<<b<<endl;      // 5
    // int b = 4;          // Not allowed 

    //========== Operators Precedence ==========
    // Just use brackets





    return 0;
}