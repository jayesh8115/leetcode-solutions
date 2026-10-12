class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n= nums.size();
        for(int i=0; i<n; i++){
            int need= target-nums[i];
            if(mp.find(need) != mp.end()){  //checking the need(number) is not equal to not found in map 
            return {mp[need],i};  //found the pair

            }
            else{
                mp[nums[i]] = i; //store current number with its index
            }
        }
        return {};

        
    }
};