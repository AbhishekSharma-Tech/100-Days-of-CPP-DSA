//----- 189. Reverse Array -----
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         vector<int> temp(nums.size());
//         for(int i=0; i<nums.size(); i++){
//             temp[(i+k)%nums.size()] = nums[i];
//         }
//         nums = temp;
//     }
// };





//----- 1752. Check if Array Is Sorted and Rotated -----
// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         int c = 0;
//         int n = nums.size();
//         for(int i=1; i<n; i++){
//             if(nums[i-1] > nums[i])
//                 c++;
//         }
//         if(nums[n-1] > nums[0])
//             c++;
        
//         return c<=1;
//     }
// };





//----- Sum Of Two Arrays -----
// vector<int> reverse(vector<int> v){
//     int s = 0;
//     int e = v.size() - 1;
//     while(s<e){
//         swap(v[s++], v[e--]);
//     }
//     return v;
// }

// vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
// 	int i = n-1;
//     int j = m-1;
//     vector<int> ans;
//     int carry = 0;
//     while(i>=0 && j>=0){
//         int val1 = a[i];
//         int val2 = b[j];
        
//         int sum = val1 + val2 + carry;
//         carry = sum/10;
//         sum = sum%10;
//         ans.push_back(sum);
//         i--;
//         j--;
//     }
//     //first case: remaining elements in 'a'
//     while(i>=0){
//         int sum = a[i] + carry;
//         carry = sum/10;
//         sum = sum%10;
//         ans.push_back(sum);
//         i--;
//     }
    
//     //second case: remaining elements in 'b'
//     while(j>=0){
//         int sum = b[j] + carry;
//         carry = sum/10;
//         sum = sum%10;
//         ans.push_back(sum);
//         j--;
//     }
    
//     //third case: carry remains
//     while(carry != 0){
//         int sum = carry;
//         carry = sum/10;
//         sum = sum%10;
//         ans.push_back(sum);
//     }
//     return reverse(ans);
// }