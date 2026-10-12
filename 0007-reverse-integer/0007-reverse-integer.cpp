class Solution {
public:
    int reverse(int x) {
        int rev_digit = 0;
        while(x != 0){
            int last_digit = x % 10;

            //Checking the condition: Overflow
            if(rev_digit > INT_MAX/10 || rev_digit == INT_MAX/10 && last_digit > 7){
                return 0;
            }
            if(rev_digit < INT_MIN/10 || rev_digit == INT_MIN/10 && last_digit < -8){
                return 0;
            }
            
            rev_digit= (rev_digit * 10) + last_digit;
            x = x / 10;
        }
         return rev_digit;
    }
   
};