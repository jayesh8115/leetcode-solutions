class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();

        if(m==0)
        return 0;  //if (needle) is empty

        for(int i=0; i<=n-m; i++){
            bool match=true;  //assuming it true first and then checking

            for(int j=0; j<m; j++){
                if(haystack[i+j]!=needle[j]){
                    match = false;
                    break;
                }
                
            }
            if(match)
            return i;
        } 
        return -1;
    }
};