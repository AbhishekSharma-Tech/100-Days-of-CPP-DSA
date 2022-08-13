// Recursion: Function calls itself directly or indirectly

// Big/Complex prblm ka sol. depend krta hai same type of chotti prblm pr -> use Recursion


#include <iostream>
using namespace std;

int factorial(int m) {

    // base case
    if(m == 0)
        return 1;

    // int smallPrblm = factorial(n-1);
    // int bigPrblm = n * smallPrblm;

    return m * factorial(m-1);

}

int power (int m, int n) {

    // Base Case 
    if (n == 0)
        return 1;

    // Recursive Relation
    // int smallPrblm = power(m, n-1);
    // int bigPrblm = m * smallPrblm;

    return m * power(m, n-1);
}

// Head Recursion
void ascPrint (int n) {

    // Base Case
    if (n == 0)
        return ;

    cout<<n<<" ";

    // Recursive Relation
    ascPrint(n-1);
}

// Tail Recursion
void dscPrint (int n) {

    // Base Case
    if (n == 0)
        return ;

    // Recursive Relation
    dscPrint(n-1);

    cout<<n<<" ";
}

int main() {
    
    int n, m;
    cout<<"Enter -> ";
    cin>>m>>n;

    cout<<"Factorial -> "<<factorial(m)<<endl;
    cout<<"Power -> "<<power(m, n)<<endl;
    cout<<"Ascending Print -> ";
    ascPrint(n);
    cout<<endl<<"Descending Print -> ";
    dscPrint(n);

}