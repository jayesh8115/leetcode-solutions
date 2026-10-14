class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long low = 1;
        long long high = *max_element(candies.begin(),candies.end());
        int ans = 0;

        while(low<=high){
            long long mid = (low+high)/2;
            long long childrens = 0;

            for(int i=0;i<candies.size();i++){
                childrens += (candies[i]/mid);
            }
            if(childrens >= k){
                ans = mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }
};