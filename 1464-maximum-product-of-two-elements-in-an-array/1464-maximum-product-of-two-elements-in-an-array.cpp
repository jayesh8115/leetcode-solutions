class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int product = 1;

        sort(nums.begin(),nums.end());

        product *= (nums[n-1]-1)*(nums[n-2]-1);
        return product;


    }
};