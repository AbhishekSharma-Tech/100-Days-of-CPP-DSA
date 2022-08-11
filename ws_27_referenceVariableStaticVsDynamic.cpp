// Reference Variable : Same memory, but different names


#include <iostream>
using namespace std;

void update(int n){     // Pass by Value: cody bnti hai
    n++;
}

void update2(int& n){   // Pass by Reference: new reference variable create hua jo same mem. loc. ko point kr raha
    n++;
}

int& func(int a) {      // Bad Practice
    int num = a;        // num & ans local var hai to jese hi ye func wala block khtm hoga wese hi ye dono bhi khtm ho jaenge/mem clr ho jaega to hoga kya jaha pt. kr rahe waha kuch hoga nhi ya kuch aur uss mem. pr aa gaya hoga 
    int& ans = num;
    return ans;
}

int* fun(int n) {       // Same dikkat func wali
    int* ptr = &n;
    return ptr;
}

int getSum (int *arr, int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main() {
    
    /*
    int i = 5;

    // Create a Reference Variable 
    int &j = i;

    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;
    */

    /*
    int n = 5;
    cout<<"Before -> "<<n<<endl;     // 5
    update(n);
    cout<<"After -> "<<n<<endl;      // 5

    cout<<"Before -> "<<n<<endl;     // 5
    update2(n);
    cout<<"After -> "<<n<<endl;      // 6

    cout<<func(n)<<endl;
    cout<<fun(n)<<endl;
    */

    int n;
    cin>>n;

    //variable size array
    int* arr = new int[n];

    //taking i/p in array
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans = getSum(arr, n);
    cout<<"Answer -> "<<ans<<endl;


    /*
    // Case 1
    while(true){        // Static Allocation: Mem automatically release
        int i = 5;      // kisi bhi instance pr hamne bs 1 int (4 byte) of mem. hi allocate kri kyuki loop khtm hote hi vo mem. release ho jaegi aur fir loop start pr int jitni mem allocate hogi
    }

    // Case 2
    while(true){        // Dynamic Allocation: Manually by using 'delete' keyword
        int* ptr = new int;     // pointer ke liye jo mem allocate ho rahi vo stack me ho rahi to vo each loop end pr release ho jaegi pr new se jo create hui heap me vo nhi hogi each loop run pr vo add-up hoti jaegi
    }
    */


}