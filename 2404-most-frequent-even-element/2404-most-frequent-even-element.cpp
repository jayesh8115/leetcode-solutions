class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>hash;

        int maxFreq = 0;
        int ans = -1;

        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }

        for(auto it:hash){
            if(it.first % 2 == 0 ){
                if(it.second > maxFreq){
                    maxFreq = it.second;
                    ans = it.first;
                }
                else if(it.second == maxFreq){
                    ans = min(ans,it.first);
                }
            }
        }
        return ans;
    }
};