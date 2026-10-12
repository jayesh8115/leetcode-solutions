class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n;
        
        while(low<high){
            int mid = (low+high)/2;
            
            if(nums[mid] < 0){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        int neg = low;
        low = 0, high = n;
        while(low<high){
            int mid = (low+high)/2;

            if(nums[mid] <= 0){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        int pos = n - low;
        return max(pos,neg);
    }
};