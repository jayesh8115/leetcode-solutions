class Solution {
public:
    int maximumGap(vector<int>& nums) {
        
        int maxi = 0;

        if(nums.size() == 1){
            return 0;
        }

        sort(nums.begin(),nums.end());
        
        for(int i=1;i<nums.size();i++){
            maxi = max(maxi,nums[i] - nums[i-1]);
        }

        return maxi;

    }
};