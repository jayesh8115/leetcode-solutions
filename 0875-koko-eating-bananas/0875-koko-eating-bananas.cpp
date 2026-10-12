class Solution {
public:

    long long calcuTotalHrs(vector<int>& piles, int hourly){
        long long totalTime = 0;
        for(int i=0;i<piles.size();i++){
            totalTime += (1LL * piles[i] + hourly-1)/hourly;

            // Optional optimization
            if (totalTime > LLONG_MAX / 2) {
                return totalTime;
            }
        }
        return totalTime;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());

        while(low<=high){
            int mid = low + (high-low)/2;
            long long totalHrs = calcuTotalHrs(piles,mid);
            if(totalHrs<=h){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};