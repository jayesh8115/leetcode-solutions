class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int curr_max = nums[0];
        int curr_min = nums[0];
        int result = nums[0];

        for(int i=1;i<n;i++){
            int num = nums[i];

            if(num < 0){
               swap(curr_max,curr_min);

            //    temp = curr_max;
            //    curr_max = curr_min;
            //    curr_min = temp;
            }

            curr_max = max(num,curr_max*num);
            curr_min = min(num,curr_min*num);

            result = max(result,curr_max);
        }
        return result;
    }
};