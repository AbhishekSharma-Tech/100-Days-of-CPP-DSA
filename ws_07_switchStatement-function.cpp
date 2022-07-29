// #include <iostream>
// using namespace std;

// int main() {
//     // char ch = '1';
//     // int num = 1;

//     // switch (ch)
//     // {
//     // case 1: cout<<"First Case"<<endl;
//     //
//     // case '1': cout<<"Second Case"<<endl;
//     //         switch (num) {
//     //             case 1: cout<<"Nested Switch"<<endl;
//     //        
//     //         }
//     //    
//     // case (2*num) : cout<<"Expression Case"<<endl;
//     // default:    cout<<"Default Statement"<<endl;
//     //
//     // }

//     // int a = 2;
//     // switch(a) {
//     //     case 1: cout<<"Case1";
//     //
//     //     case 2: cout<<"Case2";
//     //     continue;   //a continue statement may only be used within a loop
//     //     default: cout<<"Default";
//     // }

//     // Mini-Calculator
//     // int a, b;
//     // char op;
//     // cout<<"Enter number a & b: "<<endl;
//     // cin>>a>>b;
//     // cout<<"Enter an operation: "<<endl;
//     // cin>>op;

//     // switch(op) {
//     //     case '+': cout<<"Addition is "<<a+b<<endl;
//     //
//     //     case '-': cout<<"Subtraction is "<<a-b<<endl;
//     //
//     //     case '*': cout<<"Multiplication is "<<a*b<<endl;
//     //
//     //     case '/': cout<<"Division is "<<a/b<<endl;
//     //
//     //     case '%': cout<<"Modulus(Reminder) is "<<a%b<<endl;
//     //
//     //     default: cout<<"Enter valid operation"<<endl;
//     // }


//     //----- HW -----
//     // int m;
//     // cin>>m;

//     // Approach 1
//     // switch(1){
//     //     case 1: {
//     //         cout<<"No. of 2000Rs Note: "<<(m/2000)<<endl;
//     //         m = m - ((m/2000) * 2000);
//     //     }
//     //     case 2: {
//     //         cout<<"No. of 500Rs Note: "<<(m/500)<<endl;
//     //         m = m - ((m/500) * 500);
//     //     }
//     //     case 3: {
//     //         cout<<"No. of 200Rs Note: "<<(m/200)<<endl;
//     //         m = m - ((m/200) * 200);
//     //     }
//     //     case 4: {
//     //         cout<<"No. of 100Rs Note: "<<(m/100)<<endl;
//     //         m = m - ((m/100) * 100);
//     //     }
//     //     case 5: {
//     //         cout<<"No. of 50Rs Note: "<<(m/50)<<endl;
//     //         m = m - ((m/50) * 50);
//     //     }
//     //     case 6: {
//     //         cout<<"No. of 20Rs Note: "<<(m/20)<<endl;
//     //         m = m - ((m/20) * 20);
//     //     }
//     //     case 7: {
//     //         cout<<"No. of 10Rs Note: "<<(m/10)<<endl;
//     //         m = m - ((m/10) * 10);
//     //     }
//     //     case 8: {
//     //         cout<<"No. of 5Rs Coin: "<<(m/5)<<endl;
//     //         m = m - ((m/5) * 5);
//     //     }
//     //     case 9: {
//     //         cout<<"No. of 2Rs Coin: "<<(m/2)<<endl;
//     //         m = m - ((m/2) * 2);
//     //     }
//     //     case 10: {
//     //         cout<<"No. of 1Rs Coin: "<<(m/1)<<endl;
//     //         m = m - ((m/1) * 1);
//     //     }
//     // }

//     // Approach 2
//     // switch(m==0){
//     //     case 1: {
//     //         cout<<"No Money Entered"<<endl;
//     //         break;
//     //     }
//     // }
//     // switch(m>=2000){
//     //     case 1: {
//     //         cout<<"No. of 2000Rs Note: "<<(m/2000)<<endl;
//     //         m = m%2000;
//     //         break;
//     //     }
//     // }
//     // switch(m>=500){
//     //     case 1: {
//     //         cout<<"No. of 500Rs Note: "<<(m/500)<<endl;
//     //         m = m%500;
//     //         break;
//     //     }
//     // }
//     // switch(m>=200){
//     //     case 1: {
//     //         cout<<"No. of 200Rs Note: "<<(m/200)<<endl;
//     //         m = m%200;
//     //         break;
//     //     }
//     // }
//     // switch(m>=100){
//     //     case 1: {
//     //         cout<<"No. of 100Rs Note: "<<(m/100)<<endl;
//     //         m = m%100;
//     //         break;
//     //     }
//     // }
//     // switch(m>=50){
//     //     case 1: {
//     //         cout<<"No. of 50Rs Note: "<<(m/50)<<endl;
//     //         m = m%50;
//     //         break;
//     //     }
//     // }
//     // switch(m>=20){
//     //     case 1: {
//     //         cout<<"No. of 20Rs Note: "<<(m/20)<<endl;
//     //         m = m%20;
//     //         break;
//     //     }
//     // }
//     // switch(m>=10){
//     //     case 1: {
//     //         cout<<"No. of 10Rs Note: "<<(m/10)<<endl;
//     //         m = m%10;
//     //         break;
//     //     }
//     // }
//     // switch(m>=5){
//     //     case 1: {
//     //         cout<<"No. of 5Rs Coin: "<<(m/5)<<endl;
//     //         m = m%5;
//     //         break;
//     //     }
//     // }
//     // switch(m>=2){
//     //     case 1: {
//     //         cout<<"No. of 2Rs Coin: "<<(m/2)<<endl;
//     //         m = m%2;
//     //         break;
//     //     }
//     // }
//     // switch(m>=1){
//     //     case 1: {
//     //         cout<<"No. of 1Rs Coin: "<<(m/1)<<endl;
//     //         m = m%1;
//     //         break;
//     //     }
//     // }
// }










//=============== FUNCTIONS ===============
#include <iostream>
using namespace std;

// ----- POWER -----
// ----- 1 -----
// int power (int a, int b) {
//     int ans = 1;
//     for (int i=1; i<=b; i++) {
//         ans = ans * a;
//     }
//     return ans;
// }

// int main() {
//     int a, b;
//     cout<<"Enter value of a & b for a^b: "<<endl;
//     cin>>a>>b;
//     int answer = power(a, b);
//     cout<<"Answer is "<<answer<<endl;

//     int c, d;
//     cout<<"Enter value of c & d for c^d: "<<endl;
//     cin>>c>>d;
//     answer = power(c, d);
//     cout<<"Answer is "<<answer<<endl;
// }


// ----- 2 -----
// int power () {
//     int a, b;
//     cout<<"Enter value of a & b for a^b: "<<endl;
//     cin>>a>>b;
//     int ans = 1;
//     for (int i=1; i<=b; i++) {
//         ans = ans * a;
//     }
//     return ans;
// }

// int main() {
//     int answer = power();
//     cout<<"Answer is "<<answer<<endl;

//     answer = power();
//     cout<<"Answer is "<<answer<<endl;
// }


// ----- 3 -----
// void power () {
//     int a, b;
//     cout<<"Enter value of a & b for a^b: "<<endl;
//     cin>>a>>b;
//     int ans = 1;
//     for (int i=1; i<=b; i++) {
//         ans = ans * a;
//     }
//     cout<<"Answer is "<<ans<<endl;
// }

// int main() {
//     power();
//     power();
// }


// ----- EVEN & ODD -----
// 1->Even, 0->Odd
// bool isEven (int a) {
//     if(a&1)
//         return 0;
//     return 1;
// }

// int main() {
//     int n;
//     cin>>n;

//     if (isEven(n))
//         cout<<"Even";
//     else
//         cout<<"Odd";
// }


// Combination (nCr)
// int factorial (int num) {
//     int fact = 1;
//     for (int i=1; i<=num; i++) {
//         fact = fact * i;
//     }
//     return fact;
// }
// int nCr (int n, int r) {
//     int nume = factorial(n);
//     int deno = (factorial(r) * factorial(n-r));
//     return (nume/deno);
// }

// int main() {
//     int n, r;
//     cin>>n>>r;
//     cout<<"nCr is "<<nCr(n, r);
//     return 0;
// }


// Print Counting
// void printCount (int n) {
//     for (int i=1; i<=n; i++) {
//         cout<<i<<" ";
//     }
// }

// int main() {
//     int num;
//     cin>>num;
//     printCount(num);
//     return 0;
// }


// Prime Number
// 1->Prime, 0->Not Prime
// bool isPrime (int a) {
//     for(int i=2; i<a; i++) {
//         if(a%i == 0)
//             return 0;
//     }
//     return 1;
// }

// int main() {
//     int n;
//     cin>>n;
//     if(isPrime(n))
//         cout<<"Prime Number";
//     else
//         cout<<"Not Prime Number";
// }


// ----- HW -----
// Q1: nth Term of AP
// void ap (int n) {
//     cout<<(3 * n + 7);
// }

// int main() {
//     int num;
//     cin>>num;
//     ap(num);
// }


// Q2: Set Bits Count
// int setBits (int x) {
//     int count = 0;
//     while (x != 0) {
//         if(x&1)
//             count++;
//         x = x >> 1;
//     }
//     return count;
// }

// int main() {
//     int a, b;
//     cin>>a>>b;
//     cout<<(setBits(a) + setBits(b));
//     return 0;
// }


// Q3: Fibonacci nth Term
// int fibonacci (int x) {
//     int a = 0, b = 1, fib;
//     for(int i=1; i<=(x-2); i++) {
//         fib = a + b;
//         a = b;
//         b = fib;
//     }
//     return fib;
// }

// int main() {
//     int n;
//     cin>>n;
//     cout<<"Nth term is "<<fibonacci(n);
//     return 0;
// }


// ----- Pass by Value -----
// void passByValue (int n) {      // Here copy of 'n' is taken i.e 'n' here is different than 'n' in main function 
//     n++;        // this operation on 'n' doesn't affect on 'n' of main function
//     cout<<"Value of 'n' in function: "<<n<<endl;
// }

// int main() {
//     int n;
//     cout<<"Value of n: ";
//     cin>>n;     // if any change done to 'n' here it will affect on value passed to passByValue function
//     passByValue(n);     //Pass by Value: Copy of 'n' is passed in function passByValue
//     n += 5;     // this operation on 'n' doesn't affect on 'n' of passByValue function
//     cout<<"Value of 'n' in MAIN function: "<<n<<endl;
//     return 0;
// }


// ----- O/P Q -----
// Q1
// void update(int a) {
//     a = a/2;
// }
// int main() {
//     int a = 10;
//     update(a);
//     cout<<a<<endl;   //10
// }

// Q2
// int update(int a) {
//     a -= 5;
//     return a;       // this return change in value in a, but still 'a' is different that main 'a'
// }
// int main() {
//     int a = 15;
//     update(a);      // if we want to get changes performed in function here, we have to store call result in other variable
//     cout<<a<<endl;      //15
// }

// Q3
int update(int a) {
    int ans = a * a;
    return ans;       
}
int main() {
    int a = 14;
    a = update(a);      
    cout<<a<<endl;      //196
}

