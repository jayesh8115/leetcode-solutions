class Solution {
public:
    int countHomogenous(string s) {
        const int MOD = 1e9 + 7;
        int count = 0;
        int answer = 0;

        for(int i=0;i<s.size();i++){
            if(i == 0 || s[i] == s[i-1]){
                count++;
                
            }
            else{
                count = 1;
            }
            answer = (answer + count) % MOD;
        }
        
        return answer;
    }
};