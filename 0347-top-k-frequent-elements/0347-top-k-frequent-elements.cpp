class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>hash;

        for(int num : nums){
            hash[num]++;
        }
        
        priority_queue<pair<int,int>>pq;

        for(auto it: hash){
            pq.push({it.second,it.first});
        }

        vector<int>result;

        while(k--){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;

        
    }
};