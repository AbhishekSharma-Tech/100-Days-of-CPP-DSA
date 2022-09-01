#include <iostream>
// #include <stack>
using namespace std;

class Stack {
    // poperties
    public:
        int *arr;
        int top;
        int size;

    // behaviour
    Stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push (int element) {
        if(size - top > 1) {
            top++;
            arr[top] = element;
        }
        else {
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop () {
        if(top >= 0) {
            top--;
        }
        else {
            cout<<"Stack Underflow";
        }
    }

    int peek() {
        if(top >= 0)
            return arr[top];
        else {
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }

    bool isEmpty() {
        if(top == -1) {
            return true;
        }
        else {
            return false;
        }
    }
    
};

int main() {

    //--- Stack using Array ---
    Stack st(5);

    st.push(22);
    st.push(33);
    st.push(44);
    st.push(55);
    st.push(66);
    st.push(77);

    cout<<"Peek -> "<<st.peek()<<endl;

    st.pop();
    cout<<"Peek -> "<<st.peek()<<endl;
    st.pop();
    cout<<"Peek -> "<<st.peek()<<endl;
    st.pop();
    cout<<"Peek -> "<<st.peek()<<endl;

    if(st.isEmpty()) {
        cout<<"Empty Stack"<<endl;
    }
    else {
        cout<<"Stack is not Empty"<<endl;
    }




    //--- Stack using STL ---
    // // creation of stack
    // stack<int> s;

    // // push operation
    // s.push(2);
    // s.push(3);

    // // pop
    // s.pop();

    // cout<<"Print top element -> "<<s.top()<<endl;

    // if(s.empty()) {
    //     cout<<"Stack is Empty"<<endl;
    // }
    // else {
    //     cout<<"Stack is not Empty"<<endl;
    // }

    // cout<<"Size of Stack -> "<<s.size()<<endl;

    return 0;
}









//----- Q. Two Stacks -----

// class TwoStack {

//     int *arr;
//     int top1;
//     int top2;
//     int size;
    
// public:

//     // Initialize TwoStack.
//     TwoStack(int s) {
//         this -> size = s;
//         top1 = -1;
//         top2 = s;
//         arr = new int[s];
//     }
    
//     // Push in stack 1.
//     void push1(int num) {
//         // atleast a empty space present
//         if(top2 - top1 > 1) {
//             top1++;
//             arr[top1] = num;
//         }
//     }

//     // Push in stack 2.
//     void push2(int num) {
//         // atleast a empty space present
//         if(top2 - top1 > 1) {
//             top2--;
//             arr[top2] = num;
//         }
//     }

//     // Pop from stack 1 and return popped element.
//     int pop1() {
//         if(top1 >= 0) {
//             int ans = arr[top1];
//             top1--;
//             return ans;
//         }
//         else {
//             return -1;
//         }
//     }

//     // Pop from stack 2 and return popped element.
//     int pop2() {
//         if(top2 < size) {
//             int ans = arr[top2];
//             top2++;
//             return ans;
//         }
//         else {
//             return -1;
//         }
//     }
// };
