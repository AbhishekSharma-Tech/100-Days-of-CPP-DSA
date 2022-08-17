
//----- 78. Subsets -----
// class Solution {
// private:
//     void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans) {
//         // base case
//         if(index >= nums.size()){
//             ans.push_back(output);
//             return ;
//         }
        
//         // exclude
//         solve(nums, output, index+1, ans);
        
//         // include
//         int element = nums[index];
//         output.push_back(element);
//         solve(nums, output, index+1, ans);
//     }
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
        
//         vector <vector<int> > ans ;
//         vector<int> output;
//         int index = 0;
//         solve(nums, output, index, ans);
//         return ans;
//     }
// };





//----- Subsequences of String -----
// void solve(string str, string output, int index, vector<string>& ans){
//     // base case
//     if(index >= str.length()){
//         if(output.length() > 0)
//             ans.push_back(output);
//         return ;
//     }
    
//     // exclude 
//     solve(str, output, index+1, ans);
    
//     // include
//     char element = str[index];
//     output.push_back(element);
//     solve(str, output, index+1, ans);
// }

// vector<string> subsequences(string str){
	
// 	// Write your code here
//     vector<string> ans;
//     string output = "";
//     int index = 0;
//     solve(str, output, index, ans);
//     return ans;
	
// }
