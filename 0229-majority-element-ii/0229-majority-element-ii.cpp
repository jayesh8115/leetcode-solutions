class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>hash;

        for(int num: nums){
            hash[num]++;
        }

        vector<int>result;

        for(auto it: hash){
            if(it.second > n/3){
                result.push_back(it.first);
            }
        }
        return result;
    }
};