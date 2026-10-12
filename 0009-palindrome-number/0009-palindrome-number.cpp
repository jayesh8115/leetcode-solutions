class Solution {
public:
    bool isPalindrome(int x) {
        int dup = x;
        int rev = 0;

        if(x<0)
        return false;
        while(x!=0){
            int last = x % 10;
            if(rev > INT_MAX/10 || rev == INT_MAX && last > 7){
                return 0;
            }
            if(rev < INT_MIN/10 || rev == INT_MIN && last < -8){
                return 0;
            }
            rev = (rev * 10) + last;
            x = x / 10;

           
        }
         if(dup == rev)
            return true;
            else
            return false;
        
    }
};