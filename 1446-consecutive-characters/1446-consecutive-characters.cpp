class Solution {
public:
    int maxPower(string s) {
        int current_count = 1;
        int max_count = 1;

        for(int i=1;i<s.size();i++){
            if(s[i] == s[i-1]){
                current_count++;
                max_count = max(max_count,current_count);
            }
            else{
                current_count = 1;
            }
        }
        return max_count;
    }
};