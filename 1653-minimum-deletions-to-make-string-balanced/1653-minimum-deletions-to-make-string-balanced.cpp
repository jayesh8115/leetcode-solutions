class Solution {
public:
    int minimumDeletions(string s) {
       int count_b = 0;
       int deletion = 0;

       for(int i=0;i<s.length();i++)
       {
        char ch = s[i];
        if(ch=='b'){
            count_b++;
        } 
        else{
            deletion = min(deletion+1,count_b);
        }
       }
       return deletion;
        
     
    }
    
};