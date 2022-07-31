// Time Complexity: Its is the amount of time taken by an algorithm to run.
//                 - as a function of length of input.
//     Why?:   - For making better programs
//             - Comparision of algo

// Notations:      --> Big O           --> Theta           --> Omega
//                 (Upper Bound)       (Avg. Case)         (Lower Bound)
//                 (Worst Case)                            (Best Case)

// Constant Time       -> O(1)         ->    eg. for(int i=0; i<10; i++)
// Linear Time         -> O(n)         ->    eg. for(int i=0; i<n; i++)
// Logarithmic Time    -> O(log n)     ->    eg. Binary Search
// Quadratic Time      -> O(n^2)       ->    eg. for(int i=0; i<n; i++) { for(int j=0; j<n; j++) }
// Cubic Time          -> O(n^3)       ->    eg. for(int i=0; i<n; i++) { for(int j=0; j<n; j++) { for(int k=0; k<n; k++) } }


//                         O(1)    O(log n)    O(n)    O(n log n)  O(n^2)  O(n^3)  O(2^n)  O(n!)
//     (Least Complexity)  ---------------------------------------------------------------------> (Highest Complexity)



// // In addition whose complexity is highest is considered & ignor constant
// Q1. f(n) -> 2n^2 + 3n           ->  O(n^2)
// Q2. f(n) -> 4n^4 + 3n^3         ->  O(n^4)
// Q3. f(n) -> n^2 + log n         ->  O(n^2)
// Q4. f(n) -> | 200 |             ->  O(1)
// Q5. f(n) -> 3n^3 + 2n^2 + 5     ->  O(n^3)
// Q6. f(n) -> n^3 / 300           ->  O(n^3)
// Q7. f(n) -> 5n^2 + log n        ->  O(n^2)
// Q8. f(n) -> n / 4               ->  O(n)
// Q9. f(n) -> n + 4 / 4           ->  O(n)


// 10^8 Operation Rule:    Most of the Modern M/C can perform 10^8 operation/second.

// Printing Counting 1 to n :  Here loop runs n-times -> O(n)
// Reversing the Array of length 'n' : Here loop runs 'n/2' times, O(n/2) -> Ignor constant -> O(n)
// Linear Search on Array of length 'n': Here iteration done n-times -> O(n)


// Questions

// Q1. What is time complexity of following code:
//         int a=0, b=0;
//         for(int i=0; i<n; i++){     ->  O(n)
//             a = a + rand();
//         }                                +
//         for(int j=0; j<m; j++){     ->  O(m)
//             b = b + rand();
//         }
//     Assume that rand() is O(1) time.
// Sol.
//     O(n) + O(m) ->  O(n + m)


// Q2. What is time complexity of following code:
//         int a=0, b=0;
//         for(int i=0; i<n; i++){         ->  O(n)
//                                              *      ->  O(n^2)
//             for(int j=0; j<n; j++) {    ->  O(n)
//                 a = a + j;      
//             }                                +                      --> O(n^2)
//         }                                
//         for(int k=0; k<n; k++){     ->  O(n)
//             b = b + k;
//         }
// Sol.
//     (( O(n) * O(n) ) + O(n) ) -> O(n^2) + O(n) -> O(n)


// Q3. What is time complexity of following code:
//         int a=0;
//         for(int i=0; i<n; i++){         ->  O(n)
//                                              *      ->  O(n^2)
//             for(int j=n; j>i; i--) {    ->  O(n)                            because denoting in Big O  in worst case this loop runs from  n to 0  means n-times
//                 a = a + i + j;      
//             }                                
//         }
// Sol.
//     O(n) * O(n) -> O(n^2)




// =>  for(0 - n) { O(1) }                  ->  if loop runs n-times & work inside loop happen in constant time then complexity will be O(n)
// =>  for(0 - n) { func_call(0 - n) }      ->  if work inside loop happen in some variable time then complexity will be different



// Constraints: 1 < n < 10^6   : means we have to use algo whose complexity is at max. O(n log n), we can use one of O(n) or O(log n) but not upper than O(n log n).

// O(n!), O(n^6)       |       < [10...11]
// O(2^n * n^2)        |       < [15...18]
// O(n^4)              |       < 100
// O(n^3)              |       < 400
// O(n^2 * log n)      |       < 2000
// O(n^2)              |       < 10^4
// O(n log n)          |       < 10^6
// O(n), O(log n)      |       < 10^8




// Space Complexity: same as for time complexity but the term is Memory, how much mem. taking while creating variable

//     int a, int b;                   ->  O(1)    variable create me constant hi lete hai
//     int arr[5] = {1, 2, 3, 4, 5};   -> O(1)     as size is constant 
//     vector <int> v(n)               -> O(n)     as size is n
//     for(0 - n){
//         vector <int> v(n)           -> O(n)     as it doesn't matter how much time the loop runs what matter is memory taken, which is of n every time
//         for(0 - n){

//         }
//     }