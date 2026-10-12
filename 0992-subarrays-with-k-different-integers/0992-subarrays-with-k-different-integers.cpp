class Solution {
public:

    int CountofDistinctSubarray(vector<int>& nums, int k){
        int n = nums.size(); 
        int cnt = 0;
        map<int,int>mpp;
        int left = 0;
        

        for(int right=0;right<n;right++){
            mpp[nums[right]]++;

            while(mpp.size()>k){
                mpp[nums[left]]--;
                if(mpp[nums[left]] == 0){
                    mpp.erase(nums[left]);
                }
                left++;
            }
            cnt += (right-left+1);
            
        }
        return cnt;
        
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return CountofDistinctSubarray(nums,k) - CountofDistinctSubarray(nums,k-1);
             
    }

    
};