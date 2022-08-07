#include <iostream>
using namespace std;

//----- Convert to Lower Case -----
char toLowerCase(char ch) {
    if(ch >= 'a' && ch <= 'z') {
        return ch;
    }
    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}




//----- Check If The String Is A Palindrome -----
bool checkPalindrome(char arr[], int n){
    int s = 0, e = n - 1;
    while(s<=e) {
        if(toLowerCase(arr[s]) != toLowerCase(arr[e])) {
            return 0;
        }
        else {
            s++;
            e--;
        }
    }
    return 1;
}




// ----- 344. Reverse String -----
void reverse(char name[], int n){
    int s=0, e=n-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}




// ----- Length of String (Char Array) -----
int getLength(char name[]){
    int c = 0;
    for(int i=0; name[i]!='\0'; i++){
        c++;
    }
    return c;
}




char getMaxOccChar(string s) {
    int arr[26] = {0};

    // create an array of count of char.
    for(int i=0; i<s.length(); i++){        // O(n)
        char ch = s[i];
        int num = 0;

        // lowercase
        num = ch - 'a';
        // if(ch >= 'a' && ch <= 'z'){
        //     num = ch - 'a';
        // }
        // else {  // uppercase
        //     num = ch - 'A';
        // }
        arr[num]++;
    }

    // find max occur char
    int maxi = -1, ans = 0;
    for(int i=0; i<26; i++){        // O(1)
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}

int main() {
    // char name[20];
    // cout<<"Enter your name -> ";
    // cin>>name;
    // // name[2] = '\0';

    // cout<<"Name is ";
    // cout<<name<<endl;

    // int l = getLength(name);
    // cout<<"Length is -> "<<l<<endl;

    // reverse(name, l);
    // cout<<"Reverse is -> "<<name<<endl;

    // cout<<"Is Palindrome -> "<<checkPalindrome(name, l)<<endl;

    // cout<<"Char is -> "<<toLowerCase('a')<<endl;
    // cout<<"Char is -> "<<toLowerCase('M')<<endl;

    string s;
    cin>>s;
    cout<<getMaxOccChar(s)<<endl;

    return 0;
}





//----- 125. Valid Palindrome -----
// class Solution {
// private:
//     // remove unnecessary characters
//     bool valid(char ch){
//         if( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9') ){
//             return 1;
//         }
//         return 0;
//     }
    
//     // to lower case
//     char toLowerCase(char ch) {
//         if( (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9') ) {
//             return ch;
//         }
//         else {
//             char temp = ch - 'A' + 'a';
//             return temp;
//         }   
//     }
    
//     bool checkPalindrome(string a){
//         int s = 0, e = a.length() - 1;
//         while(s<=e) {
//             if(a[s] != a[e]) {
//                 return 0;
//             }
//             else {
//                 s++;
//                 e--;
//             }
//         }
//         return 1;
//     }
    
    
// public:
//     bool isPalindrome(string s) {
//         string temp = "";        // O(m)
        
//         // remove unnecessary characters
//         for(int i=0; i<s.length(); i++){     //O(m)
//             if(valid(s[i])){
//                 temp.push_back(s[i]);
//             }
//         }
        
//         // to lower case
//         for(int i=0; i<temp.length(); i++){
//             temp[i] = toLowerCase(temp[i]);
//         }
        
//         return checkPalindrome(temp);
//     }
// };





//----- Replace Spaces -----
// string replaceSpaces(string &str){
// 	string temp = "";
//     for(int i=0; i<str.length(); i++){
//         if(str[i] == ' '){
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
//         }
//         else {
//             temp.push_back(str[i]);
//         }
//     }
//     return temp;
// }





//----- 1910. Remove All Occurrences of a Substring -----
// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//         while(s.length() != 0 && s.find(part) < s.length()){
//             s.erase(s.find(part), part.length());
//         }
//         return s;
//     }
// };





//----- 567. Permutation in String -----
// class Solution {
// private: 
//     bool checkEqual(int a[26], int b[26]){
//         for(int i=0; i<26; i++){
//             if(a[i] != b[i]){
//                 return 0;
//             }
//         }
//         return 1;
//     }
    
// public:
//     bool checkInclusion(string s1, string s2) {
        
//         // char count array
//         int count1[26] = {0};
//         for(int i=0; i<s1.length(); i++){        // O(m)
//             int index = s1[i] - 'a';
//             count1[index]++;
//         }
        
//         // treverse s2 string in window of size s1 length & compare
//         int i=0;
//         int windowSize = s1.length();
//         int count2[26] = {0};
        
//         // running for 1st window
//         while(i < windowSize && i<s2.length()){      // O(m)
//             int index = s2[i] - 'a';
//             count2[index]++;
//             i++;
//         }
        
//         if(checkEqual(count1, count2)){
//             return 1;
//         }
           
//         while(i<s2.length()){                // O(n)
//             char newChar = s2[i];
//             int index = newChar - 'a';
//             count2[index]++;
            
//             char oldChar = s2[i - windowSize];
//             index = oldChar - 'a';
//             count2[index]--;
            
//             i++;
            
//             if(checkEqual(count1, count2)){
//                 return 1;
//             }
//         }
//         return 0;
//     }
// };





//----- 443. String Compression -----
// class Solution {
// public:
//     int compress(vector<char>& chars) {
//         int i = 0;
//         int ansIndex = 0;
        
//         while(i < chars.size()) {        //O(n)
//             int j = i+1;
            
//             while(j < chars.size() && chars[i] == chars[j]) {
//                 j++;
//             }    
//             // either vector is over or new/diff char found
            
//             //store old char
//             chars[ansIndex++] = chars[i];
            
//             int count = j - i;
            
//             if(count > 1) {
//                 // add count value digit by digit
//                 string cnt = to_string(count);
//                 for(char ch : cnt) {
//                     chars[ansIndex++] = ch;
//                 }
//             }
//             // move to new char
//             i = j;
//         }
//         return ansIndex;
//     }
// };