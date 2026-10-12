class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int maxsum = 0;
        int lsum = 0;
        int rsum = 0;

        // First consider taken all k cards from the left and calculate max_sum
        for(int i=0;i<k;i++){
            lsum += cardPoints[i];
            maxsum = max(maxsum,lsum+rsum);
        }
        
        // Now consider taking cards from left and right and calculate max_sum
        /*Consider k=4
        left ---> 3
        right --->1*/
        int r_idx = n-1;
        for(int i=k-1;i>=0;i--){
            lsum = lsum - cardPoints[i];
            rsum += cardPoints[r_idx];
            r_idx--;

            maxsum = max(maxsum,lsum+rsum);

        }
        return maxsum;
    }
};