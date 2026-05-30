class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(),nums.end());

        int occur = n/2;
        int i = 0 ;
        while(i<n){
        if(nums[i]==nums[occur]){
            return nums[i];
        }
        else{
            i++;
        }
        }
    }
};