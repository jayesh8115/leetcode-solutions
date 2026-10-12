class Solution {
public:
    //checking whether the character is in the given range
    //skipping the space,non-alnum characters
    bool isAlNum(char c){
        if( (c>='A' && c<='Z')||(c>='a' && c<='z')||(c>='0' && c<='9')){
            return true;
        }
        return false;
    }
    char lowercase(char c){
        if(c>='A' && c<='Z'){
            return (c-'A'+'a');
        }
        else{
            return c;
        }
    }
    bool isPalindrome(const string &s) {
       int l = 0;
       int r = (int)s.size()-1;

       while(l<r)
       {
        while(l<r && !isAlNum(s[l])) //move i next to the alnum until l>=r
        l++;
        while(l<r && !isAlNum(s[r])) //move j next to the alnum until l>=r
        r--;

        if(l<r){
            //comparing each lowercase characters
            if(lowercase(s[l]) != lowercase(s[r]))
            return false;
            l++;
            r--;
        }
       }
        return true;
        
    }
};