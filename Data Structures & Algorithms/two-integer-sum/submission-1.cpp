class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        
        int one = 0 ; 
        int two = n-1;
        int sum = 0 ;
        while(one!=n){
            
            if(nums[one]+nums[two]==target){
                sum=target;
                return {one,two};
            }
            else{
                two--;
            }
            if(two==one){
                one++;
                two=n-1;
            }
        }
    }
};
