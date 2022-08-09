/* 
    Prime Number
        Sieve of Eratosthenes :
            1. Mark every no. as Prime No.
            2. Table me aane wale sabhi no. ko non-prime mark kr do

    GCD/HCF
        gcd(a, b) = gcd(a-b, b)
                  = gcd(a%b, b)
            eg - gcd(72, 24) -> gcd(72-24, 24) = gdc(48, 24) -> gcd(24, 24) -> gcd(0, 24) ==>  24 is the GCD

        lcm(a, b) * gcd(a, b) = a * b

    Modulus
        a % n -> [0 ----> (n-1)]
        (a+b)%m = a%m + b%m
        a%m - b%m = (a-b)%m
        a%m * b%m = (a*b)%m

    Fast Exponentiation  O(log b)
        a^b ----> [ a^(b/2) ]^2     --> if b is even
            ----> [ a^(b/2) ]^2 * a --> if b is odd  
*/




//----- Prime Number -----

// #include <iostream>
// using namespace std;

// bool isPrime(int n){        // O(n)
//     if(n<=1)
//         return false;

//     for(int i=2; i<n; i++){
//         if(n%i == 0)
//             return false;
//     }
//     return true;
// }

// int main() {
//     int n;
//     cout<<"Number -> "<<endl;
//     cin>>n;

//     if(isPrime(n)){
//         cout<<"Prime Number"<<endl;
//     }
//     else {
//         cout<<"Not Prime"<<endl;
//     }
// }



//----- 204. Count Primes -----
// Optimized Code   ->  O(n * log(log n))
// class Solution {
// public:
//     int countPrimes(int n) {
        
//         int c = 0;
//         vector<bool> prime(n+1, true);
        
//         prime[0] = prime[1] = false;
        
//         for(int i=2; i<n; i++){
//             if(prime[i]) {
//                 c++;
                
//                 for(int j=2*i; j<n; j=j+i) {
//                     prime[j] = 0;
//                 }
//             }
//         }
//         return c;
//     }
// };


// class Solution {
// private:
//     bool isPrime(int n) {
//         if(n <= 1)
//             return false;
        
//         for(int i=2; i<n; i++){
//             if(n%i == 0)
//                 return false;
//         }
//         return true;
//     }
    
// public:
//     int countPrimes(int n) {
        
//         int c = 0;
        
//         for(int i=2; i<n; i++){
//             if(isPrime(i)){
//                 c++;
//             }
//         }
//         return c;
//     }
// };





//----- GCD/HCF -----
// #include <iostream>
// using namespace std;

// int gcd(int a, int b) {
//     if(a == 0)
//         return b;

//     if(b == 0)
//         return a;

//     while(a != b){
//         if(a > b)
//             a = a - b;
//         else    
//             b = b - a;
//     }
//     return a;
// }

// int main() {
//     int a, b;
//     cout<<"Enter values of a and b -> "<<endl;
//     cin>>a>>b;

//     int ans = gcd(a, b);

//     cout<<"GCD of "<<a<<" & "<<b<<" is -> "<<ans<<endl;
// }



//----- Modular Exponentiation -----
// #include <bits/stdc++.h> 
// int modularExponentiation(int x, int n, int m) {
// 	int res = 1;
    
//     while (n > 0){
//         if(n & 1){
//             res = (1LL * res * (x)%m)%m;
//         }
//         x = (1LL * (x)%m * (x)%m)%m;
//         n = n>>1;        // divide by 2
//     }
//     return res;
// }