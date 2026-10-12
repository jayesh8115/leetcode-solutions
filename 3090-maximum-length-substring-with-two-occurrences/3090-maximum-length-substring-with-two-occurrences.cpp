class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int left = 0;
        int ans = 0;

        unordered_map<int,int>map;

        for(int right=0;right<n;right++){
            map[s[right]]++;

            while(map[s[right]] > 2){
                map[s[left]]--;
                left++;
            }

            ans = max(ans,right-left+1);
        }
        return ans;
    }
    
};