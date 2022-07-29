// 7. Reverse Integer
// #include <iostream>
// using namespace std;

// int main() {
// 	int x;
// 	cin>>x;
	
// 	int i = 0, ans = 0;
// 	while(x!=0){
// 		int digit = x % 10;
//         if((ans > INT32_MAX/10) || (ans < INT32_MAX/10))        // INT_MAX & INT_MIN in LeetCode
//             return 0;
// 		ans = (ans * 10) + digit;
// 		x = x / 10;
// 	}
// 	return ans;
// }

// 1009. Complement of Base 10 Integer
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int m = n;
//     int mask = 0;
//     while(m != 0) {
//         mask  = (mask << 1) | 1;
//         m = m >> 1;
//     }
//     int ans = (~n) & mask;
//     cout<<ans;
// }

// 231. Power of Two
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0; i<=30; i++){
        int ans = pow(2, i);
        if(ans == n)
            return true;
    }
    return false;
}

// int main() {
//     int n;
//     cin>>n;
//     int ans = 1;
//     for(int i=0; i<=30; i++){
//         if(ans == n)
//             return true;
//         int ans = ans * 2;
//     }
//     return false;
// }