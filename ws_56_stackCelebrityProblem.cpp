//----- Q. The Celebrity Problem -----
// T.C -> O(n)

// //{ Driver Code Starts
// //Initial template for C++

// #include<bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// //User function template for C++

// class Solution 
// {
//     private:
//     bool knows(vector<vector<int>>& M, int a, int b, int n) {
//         if (M[a][b] == 1) {
//             return true;
//         }
//         else {
//             return false;
//         }
//     }
    
//     public:
//     //Function to find if there is a celebrity in the party or not.
//     int celebrity(vector<vector<int> >& M, int n) 
//     {
//         stack<int> s;
        
//         // Step1: push all element in stack
//         for (int i=0; i<n; i++) {
//             s.push(i);
//         }
        
//         // Step2:
//         while (s.size() > 1) {
            
//             int a = s.top();
//             s.pop();
            
//             int b = s.top();
//             s.pop();
            
//             if (knows(M, a, b, n)) {
//                 s.push(b);
//             }
//             else {
//                 s.push(a);
//             }
//         }
//         int ans = s.top();
//         // Step3: 1x element in stack is potential celeb
//         // verify it
        
//         bool rowCheck = false;
//         int zeroCount = 0;
//         for(int i=0; i<n; i++) {
//             if(M[ans][i] == 0) {
//                 zeroCount++;
//             }
//         }
        
//         // all zeroes
//         if (zeroCount == n) {
//             rowCheck = true;
//         }
        
//         // column check
//         bool colCheck = false;
//         int oneCount = 0;
        
//         for(int i=0; i<n; i++) {
//             if(M[i][ans] == 1) {
//                 oneCount++;
//             }
//         }
        
//         if(oneCount == n-1) {
//             colCheck = true;
//         }
        
//         if(rowCheck == true && colCheck == true) {
//             return ans;
//         }
//         else {
//             return -1;
//         }
//     }
// };

// //{ Driver Code Starts.

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         vector<vector<int> > M( n , vector<int> (n, 0));
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 cin>>M[i][j];
//             }
//         }
//         Solution ob;
//         cout<<ob.celebrity(M,n)<<endl;

//     }
// }

// // } Driver Code Ends




//--- App2

// //{ Driver Code Starts
// //Initial template for C++

// #include<bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// //User function template for C++

// class Solution 
// {
//     private:
//     bool knows(vector<vector<int>>& M, int a, int b, int n) {
//         if (M[a][b] == 1) {
//             return true;
//         }
//         else {
//             return false;
//         }
//     }
    
//     public:
//     //Function to find if there is a celebrity in the party or not.
//     int celebrity(vector<vector<int> >& M, int n) 
//     {
//         stack<int> s;
        
//         // Step1: push all element in stack
//         for (int i=0; i<n; i++) {
//             s.push(i);
//         }
        
//         // Step2:
//         while (s.size() > 1) {
            
//             int a = s.top();
//             s.pop();
            
//             int b = s.top();
//             s.pop();
            
//             if (knows(M, a, b, n)) {
//                 s.push(b);
//             }
//             else {
//                 s.push(a);
//             }
//         }
//         int ans = s.top();
//         // Step3: 1x element in stack is potential celeb
//         // verify it
        
//         // bool rowCheck = false;
//         int zeroCount = 0;
//         for(int i=0; i<n; i++) {
//             if(M[ans][i] == 0) {
//                 zeroCount++;
//             }
//         }
        
//         // all zeroes
//         if (zeroCount != n) {
//             return -1;
//         }
        
//         // column check
//         // bool colCheck = false;
//         int oneCount = 0;
        
//         for(int i=0; i<n; i++) {
//             if(M[i][ans] == 1) {
//                 oneCount++;
//             }
//         }
        
//         if(oneCount != n-1) {
//             return -1;
//         }
        
//         return ans;
//     }
// };

// //{ Driver Code Starts.

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         vector<vector<int> > M( n , vector<int> (n, 0));
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 cin>>M[i][j];
//             }
//         }
//         Solution ob;
//         cout<<ob.celebrity(M,n)<<endl;

//     }
// }

// // } Driver Code Ends










//----- Q. Max rectangle -----
// T.C -> O(n * m)          n -> row, m -> col
// T.C -> O(m)

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  private:
  
  vector<int> nextSmallerElement (int* arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
    
        for(int i=n-1; i>=0; i--) {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }
            // ans is stack ka top
            ans[i] = s.top();
            s.push(i);
        }   
        return ans;
    }
    
    vector<int> prevSmallerElement (int* arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
    
        for(int i=0; i<n; i++) {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }
            // ans is stack ka top
            ans[i] = s.top();
            s.push(i);
        }   
        return ans;
    }
  
  int largestRectangleArea(int* heights, int n) {
        // int n = heights.size();
        
        vector<int> next(n);
        next = nextSmallerElement (heights, n);
        
        vector<int> prev(n);
        prev = prevSmallerElement (heights, n);
        
        int area = INT_MIN;
        for(int i=0; i<n; i++) {
            int l = heights[i];
            
            if(next[i] == -1) {
                next[i] = n;
            }
            
            int b = next[i] - prev[i] - 1;
            
            int newArea = l * b;
            area = max(area, newArea);
        }
        return area;
    }
    
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        
        // compute area for first row
        int area = largestRectangleArea (M[0], m);
        
        // for remaining rows
        for (int i=1; i<n; i++) {
            for (int j=0; j<m; j++) {
                
                // row update: by adding previous row's value
                if(M[i][j] != 0)
                    M[i][j] = M[i][j] + M[i-1][j];
                else
                    M[i][j] = 0;
            }
            
            // entire row is updated now
            int newArea = largestRectangleArea(M[i], m);
            area = max(area, newArea);
        }
        
        return area;
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends