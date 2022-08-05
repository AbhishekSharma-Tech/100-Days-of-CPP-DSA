//==================== CONTAINERS ====================

//========== Sequence Container ==========

//----- Array -----
// All operation complexity is O(1)
// #include <iostream>
// #include <array>        // STL Library
// using namespace std;

// int main() {
//     int basic[3] = {1, 2, 3};

//     array<int, 4> a = {1, 2, 3, 4};     //Syntax: array<data_type, size> arr_name;

//     int size = a.size();    // Size of array
//     for(int i=0; i<size; i++){
//         cout<<a[i]<<endl;
//     }

//     cout<<"Element at 2nd Index -> "<<a.at(2)<<endl;     //O(1)
//     cout<<"Empty or Not -> "<<a.empty()<<endl;           //O(1)
//     cout<<"First Element -> "<<a.front()<<endl;          //O(1)
//     cout<<"Last Element -> "<<a.back()<<endl;            //O(1)
// }





//----- Vector -----
// All operation complexity is O(1)
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v;      // Creation size unknown
//     cout<<"Capacity -> "<<v.capacity()<<endl;   // mem allocated to it

//     vector<int> v1(5, 1);       // Initialising a vector v1 with size '5' and all the elements in it having value '1', if not write '1' by default it will be by '0'
//     for(int i:v1){
//         cout<<i<<" ";
//     }cout<<endl;

//     vector<int> v2(v1);         // copy all elements of v1 into v2
//     for(int i:v2){
//         cout<<i<<" ";
//     }cout<<endl;

//     v.push_back(1);     // insert element
//     cout<<"Capacity -> "<<v.capacity()<<endl;
//     v.push_back(2);
//     cout<<"Capacity -> "<<v.capacity()<<endl;
//     v.push_back(3);
//     cout<<"Capacity -> "<<v.capacity()<<endl;
//     cout<<"Size -> "<<v.size()<<endl;           // no. of elements present in it

//     cout<<"Element at 2nd Index -> "<<v.at(2)<<endl;
//     cout<<"First Element -> "<<v.front()<<endl;
//     cout<<"Last Element -> "<<v.back()<<endl;

//     cout<<endl<<"Before Pop"<<endl;
//     for(int i:v) {
//         cout<<i<<" ";
//     }cout<<endl;
//     v.pop_back();       // Delete last element
//     cout<<"After Pop"<<endl;
//     for(int i:v) {
//         cout<<i<<" ";
//     }cout<<endl;

//     cout<<endl<<"Before Clear Size -> "<<v.size()<<endl;
//     cout<<"Before Clear Capacity -> "<<v.capacity()<<endl;
//     v.clear();          // clear the vector / dlt all element
//     cout<<"After Clear Size -> "<<v.size()<<endl;
//     cout<<"After Clear Capacity -> "<<v.capacity()<<endl;

//     v.begin() -> starting iterator
//     v.end() -> ending iterator

// }





//----- Deque(Doubly Ended Queue) -----
// All operation complexity is O(1)
// #include <iostream>
// #include <deque>
// using namespace std;

// int main() {
//     deque<int> d;

//     d.push_back(5);         // insertion from back
//     d.push_front(10);       // insertion from front
//     for(int i:d) {
//         cout<<i<<" ";
//     }cout<<endl;

//     d.pop_back();           // deletion from back
//     d.pop_front();          // deletion from front
//     for(int i:d) {
//         cout<<i<<" ";
//     }cout<<endl;

//     cout<<"First Index Element -> "<<d.at(0)<<endl;
//     cout<<"Front -> "<<d.front()<<endl;
//     cout<<"Back -> "<<d.back()<<endl;
//     cout<<"Empty or Not -> "<<d.empty()<<endl;

//     cout<<endl<<"Before Erase -> "<<d.size()<<endl;
//     d.erase(d.begin(), d.begin() + 1);              // this will dlt elements from deque, we need to give from where to where we want elements to erase, this will erase only 1st element, as d.begin() -> 0th index & d.begin() + 1 -> 1st index and end one consider one low means if we write (0, 1) means only 0, (0, 2) -> 0 & 1,  [to dlt all elements -> d.erase(d.begin(), d.end())]
//     cout<<"After Erase -> "<<d.size()<<endl;
//     for(int i:d) {
//         cout<<i<<" ";
//     }cout<<endl;
// }





//----- List(Doubly Linked List) -----
// Operation complexity is O(n), as can't access elements directly need to treverse 
// #include <iostream>
// #include <list>
// using namespace std;

// int main() {
//     list<int> l;

//     list<int> l2(l);    // l copy into l2

//     list<int> l3(5, 100);
//     for(int i:l3) {
//         cout<<i<<" ";
//     }cout<<endl;

//     l.push_back(10);
//     l.push_front(6);
//     for(int i:l) {
//         cout<<i<<" ";
//     }cout<<endl;

//     l.pop_back();
//     l.pop_front();

//     l.erase(l.begin());         // dlt only 1st element
//     cout<<"After Erase"<<endl;
//     for(int i:l) {
//         cout<<i<<" ";
//     }cout<<endl;

//     cout<<"Size -> "<<l.size()<<endl;
// }










//========== Container Adaptors ==========

//----- Stack -----
// All operation complexity is O(1)
// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     stack<string> s;

//     s.push("Marten");       // insertion
//     s.push("Hunter");
//     s.push("Reaper");

//     cout<<"Top Element -> "<<s.top()<<endl;     // return top most element

//     s.pop();                // deletion
//     cout<<"Top Element -> "<<s.top()<<endl;

//     cout<<"Size -> "<<s.size()<<endl;
//     cout<<"Empty or Not -> "<<s.empty()<<endl;

// }





//----- Queue -----
// All operation complexity is O(1)
// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     queue<string> q;

//     q.push("Marten");       // insertion
//     q.push("Hunter");
//     q.push("Reaper");
//     cout<<"Size Before Pop-> "<<q.size()<<endl;
//     cout<<"Front Element -> "<<q.front()<<endl;     // front/first element

//     q.pop();                // deletion
//     cout<<"Size After Pop-> "<<q.size()<<endl;
//     cout<<"Front Element -> "<<q.front()<<endl;

//     cout<<"Empty or Not -> "<<q.empty()<<endl;

// }





//----- Priorty Queue -----
// #include <iostream>
// #include <queue>
// using namespace std;

// int main() {
//     // Max-Heap
//     priority_queue<int> maxi;

//     // Min-Heap
//     priority_queue<int, vector<int>, greater<int>> mini;

//     maxi.push(1);       // insertion
//     maxi.push(3);
//     maxi.push(2);
//     maxi.push(0);
//     cout<<"Size -> "<<maxi.size()<<endl;
//     int n = maxi.size();
//     for(int i=0; i<n; i++){
//         cout<<maxi.top()<<" ";      // return top element
//         maxi.pop();     // deletion
//     }cout<<endl;

//     mini.push(5);       // insertion
//     mini.push(1);
//     mini.push(0);
//     mini.push(4);
//     mini.push(3);
//     cout<<"Size -> "<<mini.size()<<endl;
//     int m = mini.size();
//     for(int i=0; i<m; i++){
//         cout<<mini.top()<<" ";      // return top element
//         mini.pop();     // deletion
//     }cout<<endl;

//     cout<<"Empty or Not -> "<<mini.empty()<<endl;
// }










//========== Associative Container ==========

//----- Set -----
// Implementation -> Using BST
// Insert, Find, Erase & Count -> O(log n)
// Size, Begin, Empty -> O(1)
// #include <iostream>
// #include <set>
// using namespace std;

// int main() {
//     set<int> s;

//     s.insert(5);        // insertion (no repeated element taken, store in sorted manner)
//     s.insert(5);
//     s.insert(5);
//     s.insert(2);
//     s.insert(2);
//     s.insert(0);
//     s.insert(1);
//     s.insert(3);
//     s.insert(4);
//     for(auto i:s) {
//         cout<<i<<" ";
//     }cout<<endl;

//     set<int>::iterator it = s.begin();
//     it++;

//     s.erase(it);
//     for(auto i:s) {
//         cout<<i<<" ";
//     }cout<<endl;

//     cout<<"3 present or not -> "<<s.count(3)<<endl;

//     set<int>::iterator itr = s.find(3);
//     for(auto it=itr; it!=s.end(); it++){
//         cout<<*it<<" ";
//     }cout<<endl;

// }





//----- Map -----
// Implementation -> Red Black Tree or Balance Tree
// Insert, Erase, Find, Count -> O(log n)
// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     map<int, string> m;

//     m[1] = "Marten";        // insertion
//     m[10] = "Hunter";
//     m[3] = "Reaper";

//     m.insert({5, "Grim"});  // insertion

//     cout<<"Before Erase"<<endl;
//     for(auto i:m) {
//         cout<<i.first<<" "<<i.second<<endl;
//     }

//     cout<<"Find 10 -> "<<m.count(10)<<endl;

//     m.erase(10);
//     cout<<"After Erase"<<endl;
//     for(auto i:m) {
//         cout<<i.first<<" "<<i.second<<endl;
//     }

//     cout<<"After Find"<<endl;
//     auto it = m.find(3);
//     for(auto i=it; i!=m.end(); i++){
//         cout<<(*i).first<<" "<<(*i).second<<endl;
//     }
// }





//----- Unordered Map -----
// Implementation -> Using Hash Table
// Search -> O(1)









//========== Algorithms ==========
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"Finding Element 5 -> "<<binary_search(v.begin(), v.end(), 5)<<endl;          // Binary Search
    cout<<"Finding Element 7 -> "<<binary_search(v.begin(), v.end(), 6)<<endl;          // binary_search(start_pt, end_pt, ele_to_find)

    cout<<"Lower Bound of 7 -> "<<lower_bound(v.begin(), v.end(), 6) - v.begin()<<endl;    // lower_bound(iterator_first, iterator_last, const val) -> return iterator pointing to the 1st element in the range [first, last) which has value not less than 'val'  
    cout<<"Upper Bound of 7 -> "<<upper_bound(v.begin(), v.end(), 4) - v.begin()<<endl;    // upper_bound(iterator_first, iterator_last, const val) -> return iterator pointing to the 1st element in the range [first, last) which has value greater than 'val'  

    int a = 5, b = 10;

    cout<<"Maximum -> "<<max(a, b)<<endl;
    cout<<"Minimum -> "<<min(a, b)<<endl;

    swap(a, b);
    cout<<endl<<"Prev a=5, Now a -> "<<a<<endl;
    cout<<"Prev b=10, Now b -> "<<b<<endl;

    string s = "abcde";
    reverse(s.begin(), s.end());
    cout<<"Reverse -> "<<s<<endl;

    rotate(v.begin(), v.begin()+1, v.end());        // v.begin()+1 -> there we gave point reference to which array have to rotate
    cout<<"After Rotate"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(), v.end());       // This Sorting Based on "Intro Sort", intro sort is based on 3-algos (Quick, Heap & Insertion Sort)
    cout<<"After Sort"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
}