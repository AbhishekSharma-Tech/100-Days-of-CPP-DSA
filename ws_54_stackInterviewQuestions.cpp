//----- Reverse String -----
// T.C -> O(n)
// S.C -> O(n)

#include <iostream>
#include <stack>
using namespace std;

int main() {

    string str = "marten";

    stack<char> s;

    for(int i=0; i<str.length(); i++) {
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";

    while(!s.empty()) {
        char ch = s.top();
        ans.push_back(ch);

        s.pop();
    }

    cout<<"Answer -> "<<ans<<endl;

    return 0;
}





//----- Q. Delete middle element from stack -----

// void solve(stack<int> &inputStack, int count, int size) {
//     // base case
//     if(count == size/2) {
//         inputStack.pop();
//         return ;
//     }
    
//     int num = inputStack.top();
//     inputStack.pop();
    
//     // recursive call
//     solve(inputStack, count+1, size);
    
//     inputStack.push(num);
// }

// void deleteMiddle(stack<int>&inputStack, int N){
	
//    int count = 0;
//     solve(inputStack, count, N);
   
// }





//----- Q. Valid Parentheses -----
// T.C -> O(n)
// S.C -> O(n)

// bool isValidParenthesis(string expression)
// {
//     stack<char> s;
//     for(int i=0; i<expression.length(); i++) {
//         char ch = expression[i];
        
//         // if opening bracket, stack push
//         // if close bracket, stack-top check & pop
        
//         if(ch == '(' || ch == '{' || ch == '[') {
//             s.push(ch);
//         }
//         else {
//             // for closing bracket
//             if(!s.empty()) {
//                 char top = s.top();
//                 if( (ch == ')' && top == '(') ||
//                     (ch == '}' && top == '{') ||
//                     (ch == ']' && top == '[')
//                 ) {
//                     s.pop();
//                 }
//                 else {
//                     return false;
//                 }
//             }
//             else {
//                 return false;
//             }
//         }
//     }
//     if(s.empty())
//         return true;
//     else 
//         return false;
// }





//----- Q. Insert An Element At Its Bottom In A Given Stack -----

// void solve(stack<int>& s, int x) {
//     // base case
//     if(s.empty()) {
//         s.push(x);
//         return ;
//     }
    
//     int num = s.top();
//     s.pop();
    
//     // recursive call
//     solve(s, x);
    
//     s.push(num);
// }

// stack<int> pushAtBottom(stack<int>& myStack, int x) 
// {
//     solve (myStack, x);
//     return myStack;
// }





//----- Q. Reverse Stack Using Recursion -----
// T.C -> O(n^2)

// void insertAtBottom (stack<int> &s, int x) {
//     // base case
//     if(s.empty()) {
//         s.push(x);
//         return ;
//     }
    
//     int num = s.top();
//     s.pop();
    
//     // recursive call
//     insertAtBottom(s, x);
    
//     s.push(num);
// }


// void reverseStack(stack<int> &stack) {
//     // base case
//     if(stack.empty()) {
//         return ;
//     }
    
//     int num = stack.top();
//     stack.pop();
    
//     // recursive call
//     reverseStack(stack);
    
//     insertAtBottom(stack, num);
// }





//----- Q. Sort a Stack -----
// T.C -> O(n^2)

// void sortedInsert (stack<int>& stack, int num) {
//     // base case
//     if(stack.empty() || (!stack.empty() && stack.top() < num)) {
//         stack.push(num);
//         return ;
//     }
    
//     int n = stack.top();
//     stack.pop();
    
//     // recursive call
//     sortedInsert(stack, num);
    
//     stack.push(n);
    
// }

// void sortStack(stack<int> &stack)
// {
// 	// base case
//     if(stack.empty()) {
//         return ;
//     }
    
//     int num = stack.top();
//     stack.pop();
    
//     // recursive call
//     sortStack(stack);
    
//     sortedInsert(stack, num);
// }





//----- Q. Redundant Brackets -----
// T.C -> O(n)

// #include <stack>
// bool findRedundantBrackets(string &s)
// {
//     stack<char> st;
//     for(int i=0; i<s.length(); i++) {
//         char ch = s[i];
        
//         if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
//             st.push(ch);
//         }
//         else {
//             // ch ya toh ')' hai or lowercase letter
            
//             if(ch == ')') {
//                 bool isRedundant = true;
                
//                 while(st.top() != '(') {
//                     char top = st.top();
//                     if(top == '+' || top == '-' || top == '*' || top == '/') {
//                         isRedundant = false;
//                     }
//                     st.pop();
//                 }
                
//                 if(isRedundant == true) 
//                     return true;
//                 st.pop();
//             }
//         }
//     }
//     return false;
// }





//----- Q. Minimum Cost To Make String Valid -----

// #include <stack>
// int findMinimumCost(string str) {
//   // odd condition
//     if(str.length()%2 == 1) {
//         return -1;
//     }
    
//     stack<char> s;
//     for(int i=0; i<str.length(); i++) {
//         char ch = str[i];
        
//         if(ch == '{') {
//             s.push(ch);
//         }
//         else {
//             // ch is closed brace
//             if(!s.empty() && s.top() == '{') {
//                 s.pop();
//             }
//             else {
//                 s.push(ch);
//             }
//         }
//     }
    
//     // stack contains invalid expression
//         int a = 0, b = 0;
//         while(!s.empty()) {
//             if(s.top() == '{') {
//                 b++;
//             }
//             else {
//                 a++;
//             }
//             s.pop();
//         }
        
//         int ans = (a+1)/2 + (b+1)/2;
//         return ans;
// }