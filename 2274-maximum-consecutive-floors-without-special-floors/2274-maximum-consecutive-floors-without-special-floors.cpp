class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        int maximum = 0;

        sort(special.begin(),special.end());
        
        maximum = max(maximum,special[0] - bottom);

        for(int i=1;i<special.size();i++){
            maximum = max(maximum,special[i]-special[i-1]-1);
        }

        maximum = max(maximum,top - special.back());

        return maximum;
    }
};