class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(),nums.end());

        int product_1 = nums[n-1]*nums[n-2]*nums[n-3];
        int product_2 = nums[0]*nums[1]*nums[n-1];

        return max(product_1,product_2); 
    }
};