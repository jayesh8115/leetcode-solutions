class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> last_lower(26,-1);
        vector<int> first_upper(26,-1);

        int n = word.size();

        for(int i=0;i<n;i++){
            char ch = word[i];
            if(islower(ch)){
                int index = ch - 'a';
                last_lower[index] = i;
            }
            else{
                int index = ch - 'A';
                if(first_upper[index] == -1){
                    first_upper[index] = i; 
                }
            }
        }

        int count = 0;

        for(int i=0;i<26;i++){
            if(last_lower[i] != -1 &&
               first_upper[i] != -1 &&
               last_lower[i] < first_upper[i]){
                count++;
               }
        }
        return count;
        
    }
};