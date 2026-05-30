class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
       
        vector<int> ans;

        for(int i = 0 ; i < 2*n ; i++){
            if(i<n){
                int x = nums[i];
               ans.push_back(x);
            }
            if(i>=n){
                int x = nums[i-n];
                ans.push_back(x);
            }
        }

        return ans;

       
    }
};