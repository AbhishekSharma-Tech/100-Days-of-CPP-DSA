#include <iostream>
using namespace std;

int main() {

    int n, i = 1;
    cin>>n;

    //----- Pattern 1 -----
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout<<j;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //----- Pattern 2 -----
    // while(i<=n){
    //     int j = n;
    //     while(j>=1){
    //         cout<<j;
    //         j--;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //----- Pattern 3 -----
    // int c =1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout<<c;
    //         j++;
    //         c++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //----- Pattern 4 -----
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout<<'*';
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //----- Pattern 5 -----
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout<<i;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //----- Pattern 6 -----
    // int c = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout<<c;
    //         j++;
    //         c++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //----- Pattern 7 -----
    // int c = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout<<c;
    //         j++;
    //         c++;
    //     }
    //     c -= (i - 1);
    //     cout<<endl;
    //     i++;
    // }

    // while(i<=n){
    //     int value = i;
    //     int j = 1;
    //     while(j<=i){
    //         cout<<value;
    //         j++;
    //         value++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout<<(i+j-1);
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //----- Pattern 8 -----
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout<<(i-j+1);
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //----- Pattern 9 -----
    // while(i<=n){
    //     char ch = ('A' + i - 1);
    //     int j = 1;
    //     while(j<=n){
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //----- Pattern 10 -----
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         char ch = ('A' + i + j - 2);
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // while(i<=n){
    //     int j = 1;
    //     char ch = ('A' + i - 1);
    //     while(j<=n){
    //         cout<<ch<<" ";
    //         j++;
    //         ch++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //----- Pattern 11 -----
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         char ch = ('A' + i - 1);
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //----- Pattern 12 -----
    // char ch = 'A';
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         cout<<ch<<" ";
    //         j++;
    //         ch++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //----- Pattern 13 -----
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i){
    //         char ch = ('A' + i + j - 2);
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //----- Pattern 14 -----
    // while(i<=n){
    //     char ch = ('A' + n - i);
    //     int j = 1;
    //     while(j<=i){
    //         cout<<ch<<" ";
    //         j++;
    //         ch++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //----- Pattern 15 -----
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         if(j <= n-i)
    //             cout<<" ";
    //         else   
    //             cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // while(i<=n){
    //     //Space Print
    //     int s = n - i;
    //     while(s){
    //         cout<<" ";
    //         s--;
    //     }
    //     //Star Print
    //     int j = 1;
    //     while(j<=i){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //----- Pattern 16 -----
    // while(i<=n){
    //     //Star Print
    //     int s = n - i + 1;
    //     while(s){
    //         cout<<"*";
    //         s--;
    //     }
    //     //Space Print
    //     int j = 1;
    //     while(j<i){
    //         cout<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //----- Pattern 17 -----
    // while(i<=n){
    //     //Space Print
    //     int j = 1;
    //     while(j<i){
    //         cout<<" ";
    //         j++;
    //     }
    //     //Star Print
    //     int s = n - i + 1;
    //     while(s){
    //         cout<<"*";
    //         s--;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    //----- Pattern 18 -----
    // while(i<=n){
    //     //Space Print
    //     int j = 1;
    //     while(j<i){
    //         cout<<" ";
    //         j++;
    //     }
    //     //No. Print
    //     int s = n - i + 1;
    //     while(s){
    //         cout<<i;
    //         s--;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //----- Pattern 19 -----
    // while(i<=n){
    //     //Space Print
    //     int s = n - i;
    //     while(s){
    //         cout<<" ";
    //         s--;
    //     }
    //     //No. Print
    //     int j = 1;
    //     while(j<=i){
    //         cout<<i;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //----- Pattern 20 -----
    // while(i<=n){
    //     //Space Print
    //     int s = i - 1;
    //     while(s){
    //         cout<<" ";
    //         s--;
    //     }
    //     //No. Print
    //     int j = 1;
    //     while(j<=(n-i+1)){
    //         cout<<(i + j - 1);
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //----- Pattern 21 -----
    // int c = 1;
    // while(i<=n){
    //     //Space Print
    //     int s = n - i;
    //     while(s){
    //         cout<<" ";
    //         s--;
    //     }
    //     //No. Print
    //     int j = 1;
    //     while(j<=i){
    //         cout<<c;
    //         c++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // //----- Pattern 22 -----
    // while(i<=n){
    //     //Print 1st Triangle
    //     int s = n - i;
    //     while(s){
    //         cout<<" ";
    //         s--;
    //     }
    //     //Print 2nd Triangle
    //     int j = 1;
    //     while(j<=i){
    //         cout<<j;
    //         j++;
    //     }
    //     //Print 3rd Triangle
    //     // int k = 1;
    //     // while(k<=i-1){
    //     //     cout<<(i-k);
    //     //     k++;
    //     // }
    //     //OR Print 3rd Triangle
    //     int k = i - 1;
    //     while(k){
    //         cout<<k;
    //         k--;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //----- Pattern 23 -----
    while(i<=n){
        //Print 1st Triangle
        int j = 1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }
        //Print 2nd Triangle
        int a = 1;
        while(a<=(i-1)*2){
            cout<<"*";
            a++;
        }
        //Print 3rd Triangle
        // int b = 2;
        // while(b<=i){
        //     cout<<"*";
        //     b++;
        // }
        //Print 4th Triangle
        int k = n - i + 1;
        while(k){
            cout<<k;
            k--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}