class Solution {
public:
    int niceSubarrays(vector<int>& nums, int k){
        int left = 0;
        int right = 0;
        int sum = 0;
        int cnt = 0;

        if(k < 0){
            return 0;
        }
        
        while(right < nums.size()){
            sum += nums[right]%2;

            while(sum > k){
                sum -= nums[left]%2;
                left++;
            }
            cnt += (right-left+1);
            right++;
        }
        return cnt;
    }    
        


    int numberOfSubarrays(vector<int>& nums, int k) {
        return niceSubarrays(nums,k) - niceSubarrays(nums,k-1);
    }
};