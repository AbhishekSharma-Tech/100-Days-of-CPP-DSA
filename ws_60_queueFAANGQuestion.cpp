//===== Queue Reversal =====
// T.C -> O(n)


// #include<bits/stdc++.h>
// using namespace std;
// queue<int> rev(queue<int> q);
// int main()
// {
//     int test;
//     cin>>test;
//     while(test--)
//     {
//     queue<int> q;
//     int n, var;
//     cin>>n;
//     while(n--)
//     {
//         cin>>var;
//         q.push(var);
//     }
//     queue<int> a=rev(q);
//     while(!a.empty())
//     {
//         cout<<a.front()<<" ";
//         a.pop();
//     }
//     cout<<endl;
//     }
// }

// queue<int> rev(queue<int> q)
// {
//     stack<int> s;

//     while (!q.empty()) {
//         int element = q.front();
//         q.pop();
//         s.push(element);
//     }

//     while (!s.empty()) {
//         int element = s.top();
//         s.pop();
//         q.push(element);
//     }
//     return q;
// }










//===== First negative integer in every window of size k =====


// #include <bits/stdc++.h>
// using namespace std;

// vector<long long> printFirstNegativeInteger(long long int arr[],
//                                             long long int n, long long int k);

// int main()
// {
//     long long int t, i;
//     cin >> t;
//     while (t--)
//     {
//         long long int n;
//         cin >> n;
//         long long int arr[n];
//         for (i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         long long int k;
//         cin >> k;

//         vector<long long> ans = printFirstNegativeInteger(arr, n, k);
//         for (auto it : ans)
//             cout << it << " ";
//         cout << endl;
//     }
//     return 0;
// }

// vector<long long> printFirstNegativeInteger(long long int A[],
//                                             long long int N, long long int K)
// {

//     deque<long long int> dq;
//     vector<long long> ans;

//     // process first window of k size
//     for (int i = 0; i < K; i++)
//     {
//         if (A[i] < 0)
//             dq.push_back(i);
//     }

//     // store answer of first k sized window
//     if (dq.size() > 0)
//         ans.push_back(A[dq.front()]);
//     else
//         ans.push_back(0);

//     // process for remaining windows
//     for (int i = K; i < N; i++)
//     {
//         // removal
//         if (!dq.empty() && i - dq.front() >= K)
//             dq.pop_front();

//         // addition
//         if (A[i] < 0)
//             dq.push_back(i);

//         // ans store
//         if (dq.size() > 0)
//             ans.push_back(A[dq.front()]);
//         else
//             ans.push_back(0);
//     }
//     return ans;
// }









//===== Reverse First K elements of Queue =====
// T.C -> O(n)
// S.C -> O(k)


// #include <bits/stdc++.h>
// using namespace std;
// queue<int> modifyQueue(queue<int> q, int k);
// int main() {
//     int t;
//     cin >> t;
//     while (t-- > 0) {
//         int n, k;
//         cin >> n >> k;
//         queue<int> q;
//         while (n-- > 0) {
//             int a;
//             cin >> a;
//             q.push(a);
//         }
//         queue<int> ans = modifyQueue(q, k);
//         while (!ans.empty()) {
//             int a = ans.front();
//             ans.pop();
//             cout << a << " ";
//         }
//         cout << endl;
//     }
// }

// queue<int> modifyQueue(queue<int> q, int k) {
//     // algo
//     // step1: pop first k from Q & put into stack
//     stack<int> s;
    
//     for(int i=0; i<k; i++) {
//         int val = q.front();
//         q.pop();
//         s.push(val);
//     }
    
//     // step2: fetch from stack & push int Q
//     while (!s.empty()) {
//         int val = s.top();
//         s.pop();
//         q.push(val);
//     }
    
//     // step3: fetch first (n-k) element from Q & push back
//     int t = q.size()-k;
    
//     while (t--) {
//         int val = q.front();
//         q.pop();
//         q.push(val);
//     }
//     return q;
// }









//===== First non-repeating character in a stream =====


// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// 	public:
// 		string FirstNonRepeating(string A){
// 		    unordered_map<char, int> count;
// 		    queue<int> q;
// 		    string ans = "";
		    
// 		    for(int i=0; i<A.length(); i++) {
// 		        char ch = A[i];
		        
// 		        // increase count
// 		        count[ch]++;
		        
// 		        // queue me push kro
// 		        q.push(ch);
		        
// 		        while (!q.empty()) {
// 		            if (count[q.front()] > 1) {
// 		                // repeating char
// 		                q.pop();
// 		            }
// 		            else {
// 		                // non-repeating char
// 		                ans.push_back(q.front());
// 		                break;
// 		            }
// 		        }
		        
// 		        if (q.empty())
// 		            ans.push_back('#');
// 		    }
// 		    return ans;
// 		}

// };


// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		string A;
// 		cin >> A;
// 		Solution obj;
// 		string ans = obj.FirstNonRepeating(A);
// 		cout << ans << "\n";
// 	}
// 	return 0;
// }









//===== Circular tour =====


// #include<bits/stdc++.h>
// using namespace std;

// struct petrolPump
// {
//     int petrol;
//     int distance;
// };


// /*
// The structure of petrolPump is 
// struct petrolPump
// {
//     int petrol;
//     int distance;
// };*/

// /*You are required to complete this method*/
// class Solution{
//   public:
  
//     //Function to find starting point where the truck can start to get through
//     //the complete circle without exhausting its petrol in between.
//     int tour(petrolPump p[],int n)
//     {
//        int deficit = 0;
//        int balance = 0;
//        int start = 0;
       
//        for (int i=0; i<n; i++) {
//            balance += p[i].petrol - p[i].distance;
//            if (balance < 0) {
//                deficit += balance;
//                start = i+1;
//                balance = 0;
//            }
//        }
       
//        if (deficit + balance >= 0) {
//            return start;
//        }
//        else {
//            return -1;
//        }
//     }
// };


// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         petrolPump p[n];
//         for(int i=0;i<n;i++)
//             cin>>p[i].petrol>>p[i].distance;
//         Solution obj;
//         cout<<obj.tour(p,n)<<endl;
//     }
// }









//===== Interleave the first half of the queue with second half =====


// #include <bits/stdc++.h> 
// using namespace std; 
  
// // Function to interleave the queue 
// void interLeaveQueue(queue<int>& q) 
// { 
//     // To check the even number of elements 
//     if (q.size() % 2 != 0) 
//         cout << "Input even number of integers." << endl; 
  
//     // Initialize an empty stack of int type 
//     stack<int> s; 
//     int halfSize = q.size() / 2; 
  
//     // Push first half elements into the stack 
//     // queue:16 17 18 19 20, stack: 15(T) 14 13 12 11 
//     for (int i = 0; i < halfSize; i++) { 
//         s.push(q.front()); 
//         q.pop(); 
//     } 
  
//     // enqueue back the stack elements 
//     // queue: 16 17 18 19 20 15 14 13 12 11 
//     while (!s.empty()) { 
//         q.push(s.top()); 
//         s.pop(); 
//     } 
  
//     // dequeue the first half elements of queue 
//     // and enqueue them back 
//     // queue: 15 14 13 12 11 16 17 18 19 20 
//     for (int i = 0; i < halfSize; i++) { 
//         q.push(q.front()); 
//         q.pop(); 
//     } 
  
//     // Again push the first half elements into the stack 
//     // queue: 16 17 18 19 20, stack: 11(T) 12 13 14 15 
//     for (int i = 0; i < halfSize; i++) { 
//         s.push(q.front()); 
//         q.pop(); 
//     } 
  
//     // interleave the elements of queue and stack 
//     // queue: 11 16 12 17 13 18 14 19 15 20 
//     while (!s.empty()) { 
//         q.push(s.top()); 
//         s.pop(); 
//         q.push(q.front()); 
//         q.pop(); 
//     } 
// } 
  
// // Driver program to test above function 
// int main() 
// { 
//     queue<int> q; 
//     q.push(11); 
//     q.push(12); 
//     q.push(13); 
//     q.push(14); 
//     q.push(15); 
//     q.push(16); 
//     q.push(17); 
//     q.push(18); 
//     q.push(19); 
//     q.push(20); 
//     interLeaveQueue(q); 
//     int length = q.size(); 
//     for (int i = 0; i < length; i++) { 
//         cout << q.front() << " "; 
//         q.pop(); 
//     } 
//     return 0; 
// }









//===== "K" Queues in an Array =====


// #include <iostream>
// using namespace std;

// class kQueue {
    
//     public:
//         int n;
//         int k;
//         int *front;
//         int *rear;
//         int *arr;
//         int freeSpot;
//         int *next;

//     public:
//         kQueue (int n, int k) {
//             this -> n = n;
//             this -> k = k;
//             front = new int[k];
//             rear = new int[k];

//             for (int i=0; i<k; i++) {
//                 front[i] = -1;
//                 rear[i] = -1;
//             }

//             next = new int[n];
//             for (int i=0; i<n; i++) {
//                 next[i] = i+1;
//             }
//             next[n-1] = -1;
//             arr = new int[n];
//             freeSpot = 0;
//         }

//         void enqueue (int data, int qn) {

//             //overflow
//             if (freeSpot == -1) {
//                 cout<<"No Empty space is available"<<endl;
//                 return ;
//             }

//             // find first free index
//             int index = freeSpot;

//             // update freespot
//             freeSpot = next[index];

//             // check whether first element
//             if (front[qn-1] == -1) {
//                 front[qn-1] = index;
//             }
//             else {
//                 // link new element to the prev element
//                 next[rear[qn-1]] = index;
//             }

//             // update next
//             next[index] = -1;

//             // update rear
//             rear[qn-1] = index;

//             // push element
//             arr[index] = data;

//         }

//         int dequeue (int qn) {

//             // underflow
//             if (front[qn-1] == -1) {
//                 cout<<"Queue Underflow"<<endl;
//                 return -1;
//             }

//             // find index to pop
//             int index = front[qn-1];

//             // front ko aage badhao
//             front[qn-1] = next[index];

//             // freespot ko manage kro
//             next[index] = freeSpot;
//             freeSpot = index;

//             return arr[index];

//         }
// };

// int main() {

//     kQueue q(10, 3);

//     q.enqueue (10, 1);
//     q.enqueue (15, 1);
//     q.enqueue (20, 2);
//     q.enqueue (25, 1);

//     cout<< q.dequeue (1) <<endl;
//     cout<< q.dequeue (2) <<endl;
//     cout<< q.dequeue (1) <<endl;
//     cout<< q.dequeue (1) <<endl;

//     return 0;
// }









//===== Sum of minimum and maximum elements of all subarrays of size k =====
// T.C -> O(n)


#include <iostream>
#include <deque>
using namespace std;

int solve (int *arr, int n, int k) {

    deque<int> maxi(k);
    deque<int> mini(k);

    // addition of first k size window
    for (int i=0; i<k; i++) {

        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
            maxi.pop_back();

        while (!mini.empty() && arr[mini.back()] >= arr[i])
            mini.pop_back();

        maxi.push_back(i);
        mini.push_back(i);
    }

    int ans = 0;
    for (int i=k; i<n; i++) {

        ans += arr[maxi.front()] + arr[mini.front()];

        // next window

        // removal
        while (!maxi.empty() && i - maxi.front() >= k)
            maxi.pop_front();

        while (!mini.empty() && i - mini.front() >= k)
            mini.pop_front();
        
        // addition
        while (!maxi.empty() && arr[maxi.back()] <= arr[i])
            maxi.pop_back();

        while (!mini.empty() && arr[mini.back()] >= arr[i])
            mini.pop_back();

        maxi.push_back(i);
        mini.push_back(i);
    }

    // make sure to consider last window
    ans += arr[maxi.front()] + arr[mini.front()];

    return ans;

}

int main() {

    int arr[7] = {2, 5, -1, 7, -3, -1, -2};
    int k = 4;

    cout<< solve(arr, 7, k) <<endl;

    return 0;
}