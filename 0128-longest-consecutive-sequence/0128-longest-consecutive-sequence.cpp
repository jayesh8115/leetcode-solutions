class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if (nums.size() == 0){
            return 0;
        }
        
        int longest = 1;
        int cnt = 0;
        int lst_small = INT_MIN;

        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            if(nums[i]-1 == lst_small){
                cnt += 1;
                lst_small = nums[i];
            }
            else if (lst_small != nums[i])
            {
                cnt = 1;
                lst_small = nums[i];
            }

            longest = max(longest,cnt);
        }
        return longest;
    }
};