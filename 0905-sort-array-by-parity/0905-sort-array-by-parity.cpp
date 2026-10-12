class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);

        int even_idx = 0;
        int odd_idx = n-1;

        for(int i=0;i<n;i++){
            if(nums[i] % 2 == 0){
                ans[even_idx] = nums[i];
                even_idx++;
            }
            else{
                ans[odd_idx] = nums[i];
                odd_idx--;
            }
        }
        return ans;
    }
};