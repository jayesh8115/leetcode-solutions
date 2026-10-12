class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int white = 0;
        int right = 0;
        int left = 0;
        int operation = INT_MAX;

        while(right < n){

            if(blocks[right] == 'W'){
                white++;
            }

            if(right-left+1 == k){
                operation = min(operation,white);

                if(blocks[left] == 'W'){
                    white--;
                }
                left++;
            }
            right++;
        }
        return operation; 
    }
};