class Solution {
public:
    int maxProduct(int n) {
        vector<int>ans;

        int largest = 0;
        int sec_largest = 0;

        while(n>0){
            int digit = n%10;

            if(digit > largest){
                sec_largest = largest;
                largest = digit;
            }
            else if(digit > sec_largest){
                sec_largest = digit;
            }

            n = n / 10;
        }
        return largest * sec_largest;


    }
};