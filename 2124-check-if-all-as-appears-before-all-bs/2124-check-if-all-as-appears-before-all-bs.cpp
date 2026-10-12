class Solution {
public:
    bool checkString(string s) {
        
        string sorted = s;
        sort(sorted.begin(),sorted.end());
        return s == sorted;
    }
};