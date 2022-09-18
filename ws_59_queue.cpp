//===== Queue =====

// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     // create a queue
//     queue<int> q;

//     q.push(11);
//     cout<<"Front -> "<<q.front()<<endl;
//     q.push(21);
//     cout<<"Front -> "<<q.front()<<endl;
//     q.push(15);

//     cout<<"Size -> "<<q.size()<<endl;
//     q.pop();
//     cout<<"Size -> "<<q.size()<<endl;

//     if(q.empty()) {
//         cout<<"Empty Queue"<<endl;
//     }
//     else {
//         cout<<"Not Empty"<<endl;
//     }

//     return 0;
// }




//----- Q. Implement a Queue -----
// All Operation : T.C -> O(1)

// class Queue {
    
//     int* arr;
//     int qfront;
//     int rear;
//     int size;
    
// public:
//     Queue() {
//         size = 100001;
//         arr = new int[size];
//         qfront = 0;
//         rear = 0;
//     }

//     /*----------------- Public Functions of Queue -----------------*/

//     bool isEmpty() {
//         if(qfront == rear) {
//             return true;
//         }
//         else {
//             return false;
//         }
//     }

//     void enqueue(int data) {
//         if (rear == size) {
//             cout<<"Queue is Full"<<endl;
//         }
//         else {
//             arr[rear] = data;
//             rear++;
//         }
//     }

//     int dequeue() {
//         if (qfront == rear) {
//             return -1;
//         }
//         else {
//             int ans = arr[qfront];
//             arr[qfront] = -1;
//             qfront++;
//             if (qfront == rear) {
//                 qfront = 0;
//                 rear = 0;
//             }
//             return ans;
//         }
//     }

//     int front() {
//         if (qfront == rear) {
//             return -1;
//         }
//         else {
//             return arr[qfront];
//         }
//     }
// };





//===== Circular Queue =====

//----- Q. Circular Queue -----
// #include <bits/stdc++.h> 
// class CircularQueue{
    
//     int *arr;
//     int front;
//     int rear;
//     int size;
    
//     public:
//     // Initialize your data structure.
//     CircularQueue(int n){
//         size = n;
//         arr = new int[size];
//         front = rear = -1;
//     }

//     // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
//     bool enqueue(int value){
//         // to check queue is full
//         if ( (front == 0 && rear == size-1) || (rear == (front-1)%(size-1))) {
// //             cout<<"Queue is Full";
//             return false;
//         }
//         // first element to push
//         else if (front == -1) {
//             front = rear = 0;
//         }
//         else if (rear == size-1 && front != 0) {
//             rear = 0;    // to maintain cyclic nature
//         }
//         else {
//             rear++;
//         }
//         arr[rear] = value;
//         return true;
//     }

//     // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
//     int dequeue(){
//         // to check queue is empty
//         if (front == -1) {
// //             cout<<"Queue is Empty"<<endl;
//             return -1;
//         }
        
//         int ans = arr[front];
//         arr[front] = -1;
        
//         // single element is present
//         if (front == rear) {
//             front = rear = -1;
//         }
//         else if (front == size-1) {
//             front = 0;    // to maintain cyclic nature
//         }
//         else {
//             front++;
//         }
//         return ans;
//     }
// };





//===== Restricted Queue =====
// 1. I/P restricted : insert from rear only (push-back) 
//                     dlt from both end (pop-front & pop-rear)
// 2. O/P restricted : insert from both end (push-front & push-back)
//                     dlt from front only (pop-front)





//===== Doubly Ended Queue (can be for queue/stack) =====

// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     // create a queue
//     deque<int> d;

//     d.push_front(11);
//     d.push_back(21);

//     cout<<"Front -> "<<d.front()<<endl;
//     cout<<"Back -> "<<d.back()<<endl;

//     d.pop_front();
//     cout<<"Front -> "<<d.front()<<endl;
//     cout<<"Back -> "<<d.back()<<endl;
//     d.pop_back();
//     cout<<"Front -> "<<d.front()<<endl;
//     cout<<"Back -> "<<d.back()<<endl;

//     if (d.empty()) {
//         cout<<"Empty Queue"<<endl;
//     }
//     else {
//         cout<<"Not Empty"<<endl;
//     }

//     return 0;
// }





//----- Q. Implement Deque -----

#include <bits/stdc++.h> 
class Deque
{
    int *arr;
    int front;
    int rear;
    int size;
    
public:
    // Initialize your data structure.
    Deque(int n)
    {
        size = n;
        arr = new int[n];
        front = rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        if (isFull()) {
            return false;
        }
        else if (isEmpty()) {
            front = rear = 0;
        }
        else if (front == 0 && rear != size-1) {
            front = size-1;
        }
        else {
            front--;
        }
        arr[front] = x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        if (isFull()) {
            return false;
        }
        else if (isEmpty()) {
            front = rear = 0;
        }
        else if (rear == size-1 && front != 0) {
            rear = 0;
        }
        else {
            rear++;
        }
        arr[rear] = x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        if (isEmpty()) {
            return -1;
        }
        
        int ans = arr[front];
        arr[front] = -1;
        
        // single element is present
        if (front == rear) {
            front = rear = -1;
        }
        else if (front == size-1) {
            front = 0;    // to maintain cyclic nature
        }
        else {
            front++;
        }
        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        if (isEmpty()) {
            return -1;
        }
        
        int ans = arr[rear];
        arr[rear] = -1;
        
        // single element is present
        if (front == rear) {
            front = rear = -1;
        }
        else if (rear == 0) {
            rear = size-1;    // to maintain cyclic nature
        }
        else {
            rear--;
        }
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if (isEmpty()) {
            return -1;
        }
        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if (isEmpty()) {
            return -1;
        }
        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if (front == -1) {
            return true;
        }
        else {
            return false;
        }
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        if ( (front == 0 && rear == size-1) || (front != 0 && rear == (front-1)%(size-1))) {
            return true;
        }
        else {
            return false;
        }
    }
};