class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());

        while(low<=high){
            int mid = (low+high)/2;
            long long operations = 0;

            for(int i=0;i<nums.size();i++){
                operations += (nums[i]-1)/mid;
            }
            if(operations <= maxOperations){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};