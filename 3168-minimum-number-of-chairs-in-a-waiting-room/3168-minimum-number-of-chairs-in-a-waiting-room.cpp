class Solution {
public:
    int minimumChairs(string s) {
        int current = 0;
        int max_people = 0;

        for(int i=0;i<s.size();i++){
            if(s[i] == 'E'){
                current++;
                max_people = max(max_people,current);
            }
            else{
                current--;
            }
        }
        return max_people;
    }
};